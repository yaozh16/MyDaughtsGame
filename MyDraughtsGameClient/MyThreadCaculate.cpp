#include "MyThreadCaculate.h"

MyThreadCaculate::MyThreadCaculate(QObject *parent)
{
    on_Game_Init();
    Direction.push_back(QPoint(1,1));
    Direction.push_back(QPoint(-1,1));
    Direction.push_back(QPoint(1,-1));
    Direction.push_back(QPoint(-1,-1));
}
MyThreadCaculate::~MyThreadCaculate(){;}
void MyThreadCaculate::on_Game_Init()
{
    Grid.clear();
    for(int i=0;i<100;i++)
        Grid.push_back(0);
    for(int i=0;i<4;i++)
        for(int j=(i+1)%2;j<10;j+=2)
            Grid[j+i*10]=2;
    for(int i=6;i<10;i++)
        for(int j=(i+1)%2;j<10;j+=2)
            Grid[j+i*10]=1;
    MaxEat=0;
    CurrentEat=0;
    AvailableSteps.clear();
    CurrentMethod.clear();
    StepsYetToUpdate.clear();
}
void MyThreadCaculate::SearchStep_Soldier(int indexX,int indexY, bool Jumpflag)
{
    for(int i=0;i<4;i++)
    {
        int tx=indexX+Direction[i].x();
        int ty=indexY+Direction[i].y();
        if(tx<0||ty<0||tx>9||ty>9)
            EndSearchStepAndSave();
        else
        {
            int num=Grid[tx+ty*10];
            if(num==1||num==-1||num==3)
                EndSearchStepAndSave();
            else if(num==0)
            {
                if(Jumpflag==false)
                {
                    CurrentMethod.push_back(QPoint(tx,ty));
                    EndSearchStepAndSave();
                    CurrentMethod.pop_back();
                }
                else
                    EndSearchStepAndSave();
            }
            else if(num==2||num==-2)
            {
                int nx=tx+Direction[i].x();
                int ny=ty+Direction[i].y();
                if(nx<0||ny<0||nx>9||ny>9||Grid[nx+ny*10]!=0)
                    EndSearchStepAndSave();
                else
                {
                    CurrentMethod.push_back(QPoint(nx,ny));
                    CurrentEat+=1;
                    Grid[tx+ty*10]=3;
                    SearchStep_Soldier(nx,ny,true);
                    CurrentMethod.pop_back();
                    CurrentEat-=1;
                    Grid[tx+ty*10]=num;
                }
            }
        }
    }
}
void MyThreadCaculate::SearchStep_King(int indexX,int indexY, bool Jumpflag)
{
    for(int i=0;i<4;i++)
    {
        int tx=indexX;
        int ty=indexY;
        int JumpEatInThisDirection=0;
        int JumpEatenEnemyIndex;
        int JumpEatenEnemyNum;
        while(1)
        {
            tx+=Direction[i].x();
            ty+=Direction[i].y();
            if(tx<0||ty<0||tx>9||ty>9)
            {
                //防止跳子到边界
                CurrentEat-=JumpEatInThisDirection;
                EndSearchStepAndSave();
                CurrentEat+=JumpEatInThisDirection;
                break;
            }
            else
            {
                int num=Grid[tx+ty*10];
                if(num==1||num==-1||num==3)
                    EndSearchStepAndSave();
                else if(num==0)
                {
                    //第一次走步且在第一次跳跃之前
                    if(JumpEatInThisDirection==0&&Jumpflag==false)
                    {
                        CurrentMethod.push_back(QPoint(tx,ty));
                        EndSearchStepAndSave();
                        CurrentMethod.pop_back();
                    }
                    //已经在该方向跳跃过或者不是第一步，则必须在该方向上跳过子才能停
                    else if(JumpEatInThisDirection==1)
                    {
                        CurrentMethod.push_back(QPoint(tx,ty));
                        SearchStep_King(tx,ty,true);
                        CurrentMethod.pop_back();
                    }
                    else
                        EndSearchStepAndSave();
                }
                else if(num==2||num==-2)
                {
                    int nx=tx+Direction[i].x();
                    int ny=ty+Direction[i].y();
                    if(JumpEatInThisDirection==1||//防止第二次跳子
                            nx<0||ny<0||nx>9||ny>9||//防止跳到棋盘外
                            Grid[nx+ny*10]!=0)//防止跳到别的子上
                    {
                        CurrentEat-=JumpEatInThisDirection;
                        EndSearchStepAndSave();
                        CurrentEat+=JumpEatInThisDirection;
                        break;
                    }
                    else
                    {
                        CurrentEat+=1;
                        JumpEatInThisDirection=1;
                        JumpEatenEnemyIndex=tx+ty*10;
                        JumpEatenEnemyNum=num;
                        Grid[tx+ty*10]=3;
                    }
                }
            }
        }
        //while结束
        if(JumpEatInThisDirection>0)
        {
            CurrentEat-=JumpEatInThisDirection;
            Grid[JumpEatenEnemyIndex]=JumpEatenEnemyNum;
        }
    };
}
void MyThreadCaculate::EndSearchStepAndSave()//在这个位置保存结束
{
    static QVector<QPoint> last;
    if(last==CurrentMethod)
        return;
    if(CurrentMethod.size()<2)
        return;
    last=CurrentMethod;
    //小兵没吃子不允许返回
    {
        QPoint start=CurrentMethod[0];
        QPoint next=CurrentMethod[1];
        if(Grid[start.x()+start.y()*10]==1&&next.y()==start.y()+1)
            return;
    }
    if(CurrentEat==MaxEat)
    {
        AvailableSteps.push_back(CurrentMethod);
    }
    else if(CurrentEat>MaxEat)
    {
        AvailableSteps.clear();
        AvailableSteps.push_back(CurrentMethod);
        MaxEat=CurrentEat;
    }
}
int MyThreadCaculate::UpdateSteps()
{
    bool changeFlag=false;
    while(!StepsYetToUpdate.isEmpty())
    {
        qDebug("--ThreadC: UpdateSteps");
        changeFlag=true;
        QVector<QPoint> Steps=StepsYetToUpdate.at(0);
        int num=Grid[Steps[0].x()+Steps[0].y()*10];
        for(int i=0;i<Steps.size()-1;i++)//路径上置0
        {
            int dx=Steps[i+1].x()-Steps[i].x();
            int dy=Steps[i+1].y()-Steps[i].y();
            int StepNumber=abs(dx);
            dx/=StepNumber;
            dy/=StepNumber;
            for(int j=0;j<StepNumber;j++)
            {
                int px=Steps[i].x()+j*dx;
                int py=Steps[i].y()+j*dy;
                Grid[px+py*10]=0;
            }
        }
        QPoint lastPoint=Steps[Steps.size()-1];
        if(num==1&&lastPoint.y()==0)
            Grid[lastPoint.x()+lastPoint.y()*10]=-1;
        else if(num==2&&lastPoint.y()==9)
            Grid[lastPoint.x()+lastPoint.y()*10]=-2;
        else
            Grid[lastPoint.x()+lastPoint.y()*10]=num;
        //弹出
        StepsYetToUpdate.pop_front();
    }
    //while结束
    if(changeFlag==true)
        return 1;
    else
        return 0;
}
void MyThreadCaculate::run()
{
    while(1)
    {
        qDebug("--ThreadC: run() Caculate");
        CurrentEat=0;
        MaxEat=0;
        CurrentMethod.clear();
        AvailableSteps.clear();
        for(int i=0;i<10;i++)
            for(int j=0;j<10;j++)
            if(Grid[j+i*10]==1)
            {
                CurrentEat=0;
                CurrentMethod.clear();
                CurrentMethod.push_back(QPoint(j,i));
                SearchStep_Soldier(j,i,false);
            }
            else if(Grid[j+i*10]==-1)
            {
                CurrentEat=0;
                CurrentMethod.clear();
                CurrentMethod.push_back(QPoint(j,i));
                SearchStep_King(j,i,false);
            }
        emit Broadcast_ThreadC_UpdateAvailabelSteps(AvailableSteps);
        while(1)
        {
            if(UpdateSteps()==1)
                break;
        }
    }
    qDebug("--ThreadC:Error:run out");
}
void MyThreadCaculate::on_Update_Move(QVector<QPoint> Steps)
{
    StepsYetToUpdate.push_back(Steps);
}
