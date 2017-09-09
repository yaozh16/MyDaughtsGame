#ifndef MYTHREADCACULATE_H
#define MYTHREADCACULATE_H

#include <QVector>
#include <QPoint>
#include <QThread>
#include <QSet>
#include <QMutex>
#include <random>
#include <QTime>
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
    int AI_State;//0关闭,1表示AI回合,2表示玩家回合,3表示未定

protected:
    void run();
public:
    MyThreadCaculate(QObject *parent=0);
    ~MyThreadCaculate();
    void SearchStep_Soldier(int indexX, int indexY, bool Jumpflag, int color);
    void SearchStep_King(int indexX,int indexY, bool Jumpflag,int color);
    void EndSearchStepAndSave(int color);//在这个位置保存结束
    int UpdateSteps();
    void AI_Move();

signals:
    void Broadcast_ThreadC_UpdateAvailabelSteps(QList<QVector<QPoint>> AvailableSteps);
    void Broadcast_AI_Move(QVector<QPoint> Steps);
    void AI_Fail();
public slots:
    void on_Update_Move(QVector<QPoint> Steps);
    void on_Game_Init();

    void on_AI_State(bool on);
    void on_AI_Load(QVector<int> Grid_);
    void on_AI_Begin(bool playerFirst);
    void Player_Fail();
};

#endif // MYTHREADCACULATE_H
