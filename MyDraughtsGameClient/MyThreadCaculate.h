#ifndef MYTHREADCACULATE_H
#define MYTHREADCACULATE_H

#include <QVector>
#include <QPoint>
#include <QThread>
#include <QSet>
#include <QMutex>
class MyThreadCaculate : public QThread
{
    Q_OBJECT
private:
    //保存了不同的[走步方法]中的[各个格子]
    QList<QVector<QPoint>> AvailableSteps;
    //棋盘:0表示空白，1表示己方兵，-1表示己方王，2表示敌方，-2表示敌方王，3为吃子的标记
    QVector<int> Grid;
    int MaxEat;
    QVector<QPoint> CurrentMethod;//当前的走步方法
    int CurrentEat;
    QVector<QPoint> Direction;
    QList<QVector<QPoint>> StepsYetToUpdate;

protected:
    void run();
public:
    MyThreadCaculate(QObject *parent=0);
    ~MyThreadCaculate();
    void SearchStep_Soldier(int indexX,int indexY, bool Jumpflag);//0~9,0~9
    void SearchStep_King(int indexX,int indexY, bool Jumpflag);
    void EndSearchStepAndSave();//在这个位置保存结束
    int UpdateSteps();

signals:
    void Broadcast_ThreadC_UpdateAvailabelSteps(QList<QVector<QPoint>> AvailableSteps);
public slots:
    void on_Update_Move(QVector<QPoint> Steps);
    void on_Game_Init();
};

#endif // MYTHREADCACULATE_H
