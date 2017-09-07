#include "dialog.h"
#include "ui_dialog.h"
#include <QSignalMapper>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QRegExp>
#include <QRegExpValidator>
#include <QMessageBox>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowTitle("My Drought Game");
    //登录界面
    {
        //界面只有按钮
        {
            Button_LogInDialog=new QPushButton(this);
            Button_LogInDialog->setText("登录");
            Button_LogInDialog->setGeometry(0,0,300,300);
            connect(Button_LogInDialog,&QPushButton::clicked,this,[this](){LogInDialog->exec();});

            Button_AI=new QPushButton(this);
            Button_AI->setText("登录");
            Button_AI->setGeometry(0,0,300,300);
            Button_AI->hide();

        }
        //登录对话框配置
        {
            LogInDialog=new QDialog;
            LogInDialog->resize(300,200);
            QGridLayout* loginDialogLayout=new QGridLayout;
            QLabel* ipLabel=new QLabel(LogInDialog);
            QLabel* comLabel=new QLabel(LogInDialog);
            QLabel* accountLabel=new QLabel(LogInDialog);
            Button_LogIn=new QPushButton(LogInDialog);
            Edit_LogInIP=new QLineEdit(LogInDialog);
            Edit_LogInCom=new QLineEdit(LogInDialog);
            Edit_Account=new QLineEdit(LogInDialog);
            Label_LogInRemind= new QLabel(LogInDialog);
            Button_LogIn->setObjectName("Button_LogIn");
            ipLabel->setText("Server IP:");
            comLabel->setText("Server Com:");
            accountLabel->setText("Player Name:");
            Button_LogIn->setText("登录");
            Edit_Account->setText("随便");
            loginDialogLayout->addWidget(ipLabel,1,1,1,1);
            loginDialogLayout->addWidget(comLabel,2,1,1,1);
            loginDialogLayout->addWidget(accountLabel,3,1,1,1);
            loginDialogLayout->addWidget(Edit_LogInIP,1,2,1,5);
            loginDialogLayout->addWidget(Edit_LogInCom,2,2,1,5);
            loginDialogLayout->addWidget(Edit_Account,3,2,1,5);
            loginDialogLayout->addWidget(Button_LogIn,4,4,1,3);
            loginDialogLayout->addWidget(Label_LogInRemind,4,1,1,3);
            LogInDialog->setLayout(loginDialogLayout);
            Edit_LogInIP->setValidator(new QRegExpValidator(QRegExp("[0-9]{1,3}.[0-9]{1,3}.[0-9]{1,3}.[0-9]{1,3}"),this));
            Edit_LogInCom->setValidator(new QRegExpValidator(QRegExp("[0-9]{1,4}"),this));
            Edit_LogInIP->setText("127.0.0.1");
            Edit_LogInCom->setText("6666");
            connect(Button_LogIn,SIGNAL(clicked(bool)),this,SLOT(on_Button_LogIn_clicked()));

        }
    }
    //游戏界面
    {
        QGridLayout* GameLayout=new QGridLayout(this);
        //棋盘
        {
            GridWidget=new QWidget(this);
            GridWidget->setObjectName("GridWidget");
            GameLayout->addWidget(GridWidget,1,1,500,500);
            QSignalMapper *signalMapper = new QSignalMapper(this);
            QGridLayout* gridLayout=new QGridLayout(GridWidget);
            for(int i=0;i<100;i++)//GridButton与GridLabel
            {
                Grid.push_back(0);
                QLabel* label=new QLabel;
                label->setFixedSize(50,50);
                if((i/10+i%10)%2==1)
                    label->setStyleSheet("border-image: url(:/resources/White.png);");
                else
                    label->setStyleSheet("border-image: url(:/resources/Black.png);");
                QPushButton* button =new QPushButton;
                button->setFlat(true);
                button->setFixedSize(50,50);
                signalMapper->setMapping(button, i);
                connect(button, SIGNAL(clicked()), signalMapper, SLOT(map()));
                gridLayout->addWidget(label,i/10+1,i%10+1,1,1);
                gridLayout->addWidget(button,i/10+1,i%10+1,1,1);
                GridButtons.push_back(button);
                GridLabels.push_back(label);
            }
            connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(on_pushButton_Grid(int)));
        }
        //下方按键与聊天区
        {
            OperationWidget=new QWidget;
            GameLayout->addWidget(OperationWidget,500,1,100,500);
            QGridLayout* OperationLayout=new QGridLayout(OperationWidget);

            Button_BackToLogIn=new QPushButton;
            OperationLayout->addWidget(Button_BackToLogIn,1,1,25,100);
            Button_BackToLogIn->setText("返回初始界面");


            Button_Surrender=new QPushButton;
            OperationLayout->addWidget(Button_Surrender,26,1,25,100);
            Button_Surrender->setText("投降");

            Button_Peace=new QPushButton;
            OperationLayout->addWidget(Button_Peace,51,1,25,100);
            Button_Peace->setText("求和");

            Button_Ready=new QPushButton;
            OperationLayout->addWidget(Button_Ready,76,1,25,100);
            Button_Ready->setText("在线匹配");

            Button_ChatSend=new QPushButton;
            OperationLayout->addWidget(Button_ChatSend,61,401,40,100);
            Button_ChatSend->setText("发送");

            Edit_Chat=new QLineEdit;
            OperationLayout->addWidget(Edit_Chat,61,101,40,300);

            Edit_Print=new QTextEdit;
            OperationLayout->addWidget(Edit_Print,1,101,60,400);
        }
    }

    //线程配置
    ThreadC=new MyThreadCaculate;
    ThreadT=new MyThreadTransferMessage;
    qRegisterMetaType<QList<QVector<QPoint>>>("QList<QVector<QPoint>>");
    qRegisterMetaType<QVector<QPoint>>("QVector<QPoint>");
    qRegisterMetaType<QVector<int>>("QVector<int>");
    InitSSConnections();


    ThreadC->start();
    ThreadT->start();
    LogInInit();
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::InitSSConnections()
{
    connect(Button_AI,SIGNAL(clicked(bool)),this,SLOT(on_Button_AI_clicked()));
    connect(this,SIGNAL(Broadcast_LogOut()),ThreadT,SLOT(on_LogOut()));
    connect(this,SIGNAL(Broadcast_GameInit()),ThreadC,SLOT(on_Game_Init()));
    connect(this,SIGNAL(Request_Connect(QString,int)),ThreadT,SLOT(on_Connect(QString,int)));
    connect(ThreadT,SIGNAL(Broadcast_Connect_Success(bool)),this,SLOT(on_ThreadT_Update_Connect_State(bool)));
    connect(this,SIGNAL(Request_Ready()),ThreadT,SLOT(on_Ready()));
    connect(ThreadT,SIGNAL(Broadcast_Begin(bool)),this,SLOT(on_ThreadT_Begin(bool)));
    connect(ThreadC,SIGNAL(Broadcast_ThreadC_UpdateAvailabelSteps(QList<QVector<QPoint> >)),this,SLOT(on_ThreadC_UpdateAvailableSteps(QList<QVector<QPoint> >)));
    connect(this,SIGNAL(Broadcast_Update_Move(QVector<QPoint>)),ThreadC,SLOT(on_Update_Move(QVector<QPoint>)));
    connect(this,SIGNAL(Broadcast_Update_Move(QVector<QPoint>)),ThreadT,SLOT(on_Send_Steps(QVector<QPoint>)));
    connect(ThreadT,SIGNAL(Broadcast_Received_Steps(QVector<QPoint>)),this,SLOT(on_MoveSteps(QVector<QPoint>)));
    connect(ThreadT,SIGNAL(Broadcast_Received_Steps(QVector<QPoint>)),ThreadC,SLOT(on_Update_Move(QVector<QPoint>)));
    //求和投降操作
    connect(this,SIGNAL(Request_Peace()),ThreadT,SLOT(on_Request_Peace()));
    connect(this,SIGNAL(Request_Surrender()),ThreadT,SLOT(on_Request_Surrender()));
    connect(ThreadT,SIGNAL(Broadcast_Request_Peace()),this,SLOT(on_Peace_Requested()));
    connect(ThreadT,SIGNAL(Broadcast_Request_Surrender()),this,SLOT(on_Surrender_Requested()));
    connect(this,SIGNAL(Reply_Peace(bool)),ThreadT,SLOT(on_Reply_Peace(bool)));
    connect(this,SIGNAL(Reply_Surrender(bool)),ThreadT,SLOT(on_Reply_Surrender(bool)));
    connect(ThreadT,SIGNAL(Broadcast_Reply_Peace(bool)),this,SLOT(on_Peace_Reply(bool)));
    connect(ThreadT,SIGNAL(Broadcast_Reply_Surrender(bool)),this,SLOT(on_Surrender_Reply(bool)));
    //其他
    connect(this,SIGNAL(Broadcast_Auto_Peace()),ThreadT,SLOT(on_AutoPeace()));
    connect(ThreadT,SIGNAL(Broadcast_AutoPeace()),this,SLOT(on_AutoPeace()));
    connect(this,SIGNAL(Request_Chat(QString)),ThreadT,SLOT(on_Chat(QString)));
    connect(ThreadT,SIGNAL(Broadcast_Received_Chat(QString)),this,SLOT(on_ThreadT_ReceiveChat(QString)));
    connect(ThreadT,SIGNAL(Broadcast_Enemy_Lost()),this,SLOT(on_ThreadT_Enemy_Lost()));
    connect(ThreadT,SIGNAL(Broadcast_Enemy_Fail()),this,SLOT(on_ThreadT_Enemy_Fail()));
    connect(this,SIGNAL(Broadcast_Fail()),ThreadT,SLOT(on_Fail()));
    connect(this,SIGNAL(Broadcast_End()),ThreadT,SLOT(on_End()));


    connect(Button_BackToLogIn,SIGNAL(clicked(bool)),this,SLOT(on_Button_BackToLogIn_clicked()));
    connect(Button_Ready,SIGNAL(clicked(bool)),this,SLOT(on_Button_Ready_clicked()));
    connect(Button_Peace,SIGNAL(clicked(bool)),this,SLOT(on_Button_Peace_clicked()));
    connect(Button_Surrender,SIGNAL(clicked(bool)),this,SLOT(on_Button_Surrender_clicked()));
    connect(Button_ChatSend,SIGNAL(clicked(bool)),this,SLOT(on_Button_ChatSend_clicked()));
}
void Dialog::LogInInit()
{
    GridWidget->hide();
    OperationWidget->hide();
    Button_LogInDialog->show();
    setFixedSize(300,300);
}
void Dialog::GameInit()
{
    emit Broadcast_GameInit();
    Start=0;
    MyTurn=false;
    peaceCount=-1;
    setFixedSize(500,600);
    Button_LogInDialog->hide();
    GridWidget->show();
    OperationWidget->show();
    Grid.clear();
    for(int i=0;i<100;i++)
        Grid.push_back(0);
    for(int i=0;i<4;i++)
        for(int j=(i+1)%2;j<10;j+=2)
            Grid[j+i*10]=2;
    for(int i=6;i<10;i++)
        for(int j=(i+1)%2;j<10;j+=2)
            Grid[j+i*10]=1;
    Game_DisplayClear();
    StepIndex=0;
}
void Dialog::on_Button_AI_clicked()
{;
}
void Dialog::on_Button_LogIn_clicked()
{
    qDebug("try to log in");
    emit Request_Connect(Edit_LogInIP->text(),Edit_LogInCom->text().toInt());
}
void Dialog::on_ThreadT_Update_Connect_State(bool success)
{
    if(success)
    {
        if(LogInDialog->isActiveWindow())
            LogInDialog->close();
        GameInit();
    }
    else
        LogInInit();
    connectFlag=success;
}

void Dialog::on_Button_BackToLogIn_clicked()
{
    if(Start>0)
        emit Broadcast_LogOut();
    GameInit();
    LogInInit();
}

void Dialog::on_Button_Ready_clicked()
{
    QString Text=Edit_Print->toPlainText();
    Text+=QString("匹配中...\n");
    Edit_Print->setText(Text);
    QTextCursor cursor=Edit_Print->textCursor();
    cursor.setPosition(-1);
    Edit_Print->setTextCursor(cursor);
    emit Request_Ready();
}
void Dialog::on_ThreadT_Begin(bool first)//开始后棋盘生效
{
    QString Text=Edit_Print->toPlainText();
    Text+=QString("Game Start!\n");
    if(first)
        Text+=QString("First\n");
    else
        Text+=QString("Second\n");
    Edit_Print->setText(Text);
    if (first)
        Start=1;
    else
        Start=2;

    MyTurn=first;
    Game_DisplayClear();
    if(MyTurn)
        for(auto iter=CurrentAvailableSteps.begin();iter!=CurrentAvailableSteps.end();iter++)
        {
            QPoint p=(*iter)[StepIndex];
            GridLabels[p.x()+p.y()*10]->setStyleSheet("border-image: url(:/resources/Final.jpg);");
        }
}

void Dialog::on_pushButton_Grid(int n)
{
    if(!Start)
    {
        qDebug()<<"Not Start";
        return;
    }
    if(!MyTurn)
    {
        qDebug()<<"Not My Turn";
        return;
    }

    //点一个点：在集合内：移动，集合收缩；
    //      不在集合内：恢复，扩张
    int x=n%10;
    int y=n/10;
    QPoint currentClick(x,y);
    if(Grid[n]==1||Grid[n]==-1)
        qDebug("Clicked Self");
    else if(Grid[n]==2||Grid[n]==-2)
        qDebug("Clicked Enemy");
    bool FindFlag=false;
    for(auto iter=CurrentAvailableSteps.begin();iter!=CurrentAvailableSteps.end();iter++)
    {
        QVector<QPoint> t=(*iter);
        if(t[StepIndex]==currentClick)
        {
            FindFlag=true;
            break;
        }
    }
    Game_DisplayClear();
    if(FindFlag)//可以走
    {
        qDebug()<<"FindFlag true";
        //剪枝
        for(int i=0;i<CurrentAvailableSteps.size();)
        {
            QVector<QPoint> t=CurrentAvailableSteps.at(i);
            if(t[StepIndex]!=currentClick)
            {
                CurrentAvailableSteps.removeAt(i);
            }
            else
                i++;
        }
        qDebug("CurrentAvailableSteps.size()= %d",CurrentAvailableSteps.size());
        if(CurrentAvailableSteps.size()==1)//只有一种了
        {
            on_MoveSteps(CurrentAvailableSteps.at(0));
            emit Broadcast_Update_Move(CurrentAvailableSteps.at(0));
            StepIndex=0;
            return;
        }
        StepIndex+=1;
    }
    else
    {
        qDebug()<<"FindFlag false";
        CurrentAvailableSteps=AvailableSteps;
        StepIndex=0;
    }
    for(auto iter=CurrentAvailableSteps.begin();iter!=CurrentAvailableSteps.end();iter++)
    {
        QPoint p=(*iter)[StepIndex];
        GridLabels[p.x()+p.y()*10]->setStyleSheet("border-image: url(:/resources/Final.jpg);");
    }
}
void Dialog::on_ThreadC_UpdateAvailableSteps(QList<QVector<QPoint> > AvailableSteps_)
{

    qDebug()<<"ThreadCaculate_UpdatePossibility";
    qDebug("Available Method Size: %d",AvailableSteps_.size());
    AvailableSteps=AvailableSteps_;
    CurrentAvailableSteps=AvailableSteps_;
    StepIndex=0;
    if(CurrentAvailableSteps.size()==0)
    {
        QMessageBox box;
        box.setText("We Have Nowhere to Go and Lost");
        QString Text=Edit_Print->toPlainText();
        Text+="We Have Nowhere to Go and Lost\n";
        Edit_Print->setText(Text);
        box.exec();
        GameEnd(-1);
        emit Broadcast_Fail();
    }
    if(MyTurn)
        for(auto iter=CurrentAvailableSteps.begin();iter!=CurrentAvailableSteps.end();iter++)
        {
            QPoint p=(*iter)[StepIndex];
            GridLabels[p.x()+p.y()*10]->setStyleSheet("border-image: url(:/resources/Final.jpg);");
        }
}
void Dialog::Game_DisplayClear()
{
    for(int i=0;i<100;i++)
    {
        if(Grid[i]==1)
            GridButtons[i]->setStyleSheet("border-image: url(:/resources/0"+QString::number(Start)+".png);");
        else if(Grid[i]==2)
            GridButtons[i]->setStyleSheet("border-image: url(:/resources/0"+QString::number(3-Start)+".png);");
        else if(Grid[i]==-1)
            GridButtons[i]->setStyleSheet("border-image: url(:/resources/King0"+QString::number(Start)+".png);");
        else if(Grid[i]==-2)
            GridButtons[i]->setStyleSheet("border-image: url(:/resources/King0"+QString::number(3-Start)+".png);");
        else
            GridButtons[i]->setStyleSheet("");
        if((i/10+i%10)%2==1)
            GridLabels[i]->setStyleSheet("border-image: url(:/resources/White.png);");
        else
            GridLabels[i]->setStyleSheet("border-image: url(:/resources/Black.png);");

    }

}
void Dialog::on_MoveSteps(QVector<QPoint> Steps)//暂时没有特效
{
    MyTurn=!MyTurn;
    if(peaceCount>=0)
    {
        if(Steps.size()<3)
            peaceCount+=1;
        else
            peaceCount==0;
        if(peaceCount>39)
        {

            emit Broadcast_Auto_Peace();
            QMessageBox box(this);
            box.setText("40 Turns With No Jump:Auto Peace Reached");
            QString Text=Edit_Print->toPlainText();
            Text+="40 Turns With No Jump:Auto Peace Reached\n";
            Edit_Print->setText(Text);
            box.exec();
            GameEnd(0);
            return;
        }
    }
    int num=Grid[Steps[0].x()+Steps[0].y()*10];
    Grid[Steps[0].x()+Steps[0].y()*10]=num;
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
        Grid[Steps[i+1].x()+Steps[i+1].y()*10]=num;
    }
    QPoint lastPoint=Steps[Steps.size()-1];
    if(num==1&&lastPoint.y()==0)
        Grid[lastPoint.x()+lastPoint.y()*10]=-1;
    else if(num==2&&lastPoint.y()==9)
        Grid[lastPoint.x()+lastPoint.y()*10]=-2;
    else
        Grid[lastPoint.x()+lastPoint.y()*10]=num;
    Game_DisplayClear();
}

void Dialog::on_Button_Peace_clicked()
{
    QString Text=Edit_Print->toPlainText();
    Text+="<<Request for Peace\n";
    Edit_Print->setText(Text);
    emit Request_Peace();
}
void Dialog::on_Button_Surrender_clicked()
{
    QString Text=Edit_Print->toPlainText();
    Text+="<<Request for Surrender\n";
    Edit_Print->setText(Text);
    emit Request_Surrender();
}

void Dialog::on_Peace_Requested()//收到求和请求
{
    QMessageBox box(this);
    box.setText("Enemy request for Peace\nAccept? (Default for No)");
    box.addButton(QMessageBox::Yes);
    box.addButton(QMessageBox::No);
    int ret=box.exec();
    if(ret==QMessageBox::Yes)
    {
        emit Reply_Peace(true);

        QString Text=Edit_Print->toPlainText();
        Text+="Peace Done!\n";
        Edit_Print->setText(Text);

        GameEnd(0);
        qDebug()<<"Yes";
    }
    else
    {
        QString Text=Edit_Print->toPlainText();
        Text+="We refused enemy's peace request!\n";
        Edit_Print->setText(Text);
        emit Reply_Peace(false);
        qDebug()<<"No";
    }
    if(peaceCount<0)
        peaceCount==0;
}
void Dialog::on_Surrender_Requested()//收到投降请求
{
    QMessageBox box(this);
    box.setText("Enemy want to surrender\nAccept? (Default for No)");
    box.addButton(QMessageBox::Yes);
    box.addButton(QMessageBox::No);
    int ret=box.exec();
    if(ret==QMessageBox::Yes)
    {
        emit Reply_Surrender(true);

        QString Text=Edit_Print->toPlainText();
        Text+="Enemy Surrendered\nWe win!\n";
        Edit_Print->setText(Text);

        GameEnd(1);
    }
    else
    {
        emit Reply_Surrender(false);
        QString Text=Edit_Print->toPlainText();
        Text+="We refused enemy's surrender!\n";
        Edit_Print->setText(Text);

    }
}
void Dialog::on_Peace_Reply(bool agree)//获得求和回复
{
    QMessageBox box;
    if(agree)
    {
        emit Broadcast_End();
        box.setText("Enemy Accepted Our Peace Request");
        QString Text=Edit_Print->toPlainText();
        Text+="Enemy Accepted Our Peace Request\n";
        Edit_Print->setText(Text);
        box.exec();
        GameEnd(0);

    }
    else
    {
        box.setText("Enemy Refused Our Peace Request");
        QString Text=Edit_Print->toPlainText();
        Text+="Enemy Refused Our Peace Request\n";
        Edit_Print->setText(Text);
        box.exec();
    }
    if(peaceCount<0)
        peaceCount==0;
}
void Dialog::on_Surrender_Reply(bool agree)//获得投降回复
{
    QMessageBox box;
    if(agree)
    {
        box.setText("Enemy Accepted Our Surrender");
        QString Text=Edit_Print->toPlainText();
        Text+="Enemy Accepted Our Surrender\n";
        Edit_Print->setText(Text);
        box.exec();
        GameEnd(-1);
        emit Broadcast_End();
    }
    else
    {
        box.setText("Enemy Refused Our Surrender");
        QString Text=Edit_Print->toPlainText();
        Text+="Enemy Refused Our Surrender\n";
        Edit_Print->setText(Text);
        box.exec();
    };
}
void Dialog::on_AutoPeace()
{
    emit Broadcast_End();
    QMessageBox box(this);
    box.setText("40 Turns With No Jump:Auto Peace Reached");
    QString Text=Edit_Print->toPlainText();
    Text+="40 Turns With No Jump:Auto Peace Reached\n";
    Edit_Print->setText(Text);
    box.exec();
    GameEnd(0);
}


void Dialog::on_Button_ChatSend_clicked()
{
    QString message=Edit_Chat->text();
    QString Text=Edit_Print->toPlainText();
    Text+=QString(message+"\n");

    Edit_Print->setText(Text);
    QTextCursor cursor(Edit_Print->textCursor());
    cursor.movePosition(QTextCursor::EndOfBlock);
    Edit_Print->setTextCursor(cursor);
    Edit_Chat->setText("");
    emit Request_Chat(message);
}
void Dialog::on_ThreadT_ReceiveChat(QString message)
{
    QString Text=Edit_Print->toPlainText();
    Text+=QString(message+"\n");
    Edit_Print->setText(Text);
}

void Dialog::on_ThreadT_Enemy_Fail()
{
    QMessageBox box(this);
    box.setText("Enemy Have Nowhere to Go!");
    box.exec();
    QString Text=Edit_Print->toPlainText();
    Text+="Enemy Have Nowhere to Go!\n";
    Edit_Print->setText(Text);
    GameEnd(1);
    emit Broadcast_End();
}
void Dialog::on_ThreadT_Enemy_Lost()
{
    QMessageBox box(this);
    box.setText("Enemy Have Lost Link!");
    box.exec();
    QString Text=Edit_Print->toPlainText();
    Text+="Enemy Have Lost Link!\nWe Win!\n";
    Edit_Print->setText(Text);
    GameEnd(0);
    emit Broadcast_End();
}
void Dialog::GameEnd(int ResultState)
{
    QString Text=Edit_Print->toPlainText();
    Text+=QString("End!");
    Edit_Print->setText(Text);
    GameInit();
}
