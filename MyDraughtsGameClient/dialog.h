#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTcpSocket>
#include <QHostAddress>
#include <QLineEdit>
#include <QPushButton>
#include <QMouseEvent>
#include <QTimer>
#include <QVector>
#include <QLabel>
#include <QDialog>
#include <QTextEdit>
#include "MyThreadCaculate.h"
#include "MyThreadTransferMessage.h"
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    bool connectFlag;           //连接状态
    QString AccountName;        //用户名

    //登录界面
    QPushButton*     Button_LogInDialog;
    QDialog*         LogInDialog;
    QPushButton*     Button_LogIn;
    QLineEdit*       Edit_LogInIP;
    QLineEdit*       Edit_LogInCom;
    QLineEdit*       Edit_Account;
    QLabel*          Label_LogInRemind;
    //游戏界面
    //操作界面
    QWidget*         OperationWidget;
    QLineEdit*       Edit_Chat;
    QPushButton*     Button_ChatSend;
    QPushButton*     Button_Surrender;
    QPushButton*     Button_Peace;
    QPushButton*     Button_Ready;
    QTextEdit*       Edit_Print;
    //棋盘界面
    QWidget*         GridWidget;
    QVector<QPushButton*> GridButtons;
    QVector<QLabel*> GridLabels;
    QVector<int> Grid;          //1己方2敌方-1我方王-2敌方王
    //保存了不同的[走步方法]中的[各个格子]
    QList<QVector<QPoint>> AvailableSteps;
    //包含当前可以走的集合
    QList<QVector<QPoint>> CurrentAvailableSteps;
    int StepIndex;
    bool MyTurn;
    bool Start;
    MyThreadCaculate* ThreadC;
    MyThreadTransferMessage* ThreadT;
    void LogInInit();
    void GameInit();
    void InitSSConnections();
    void Game_DisplayClear();
    void GameEnd(int ResultState);//1为胜利，-1为失败，0为平局
signals:
    void Request_Connect(QString IP,int com);
    void Request_Ready();
    void Request_Peace();
    void Request_Surrender();
    void Reply_Peace(bool agree);
    void Reply_Surrender(bool agree);
    void Request_Chat(QString);
    void Broadcast_Update_Move(QVector<QPoint> Steps);
    void Broadcast_Fail();
    void Broadcast_End();//由后知道结束的人发
    void Broadcast_GameInit();
public slots:
    void on_Button_LogIn_clicked();//登录按钮
    void on_ThreadT_Update_Connect_State(bool success);//返回连接结果
    void on_Button_Ready_clicked();//准备好了
    void on_ThreadT_Begin(bool first);//返回开始状态
    void on_MoveSteps(QVector<QPoint> Steps);//用于本GUI展示效果
    void on_Button_Peace_clicked();
    void on_Button_Surrender_clicked();
    void on_Peace_Requested();
    void on_Surrender_Requested();
    void on_Peace_Reply(bool agree);
    void on_Surrender_Reply(bool agree);
    void on_Button_ChatSend_clicked();
    void on_ThreadT_ReceiveChat(QString message);
    void on_ThreadT_Enemy_Fail();
    void on_ThreadT_Enemy_Lost();
    void on_pushButton_Grid(int n);//点击棋盘

    void on_ThreadC_UpdateAvailableSteps(QList<QVector<QPoint>> AvailableSteps);

};

#endif // DIALOG_H
