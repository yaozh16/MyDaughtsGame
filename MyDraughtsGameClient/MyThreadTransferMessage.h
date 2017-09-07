#ifndef MYTHREADTRANSFERMESSAGE_H
#define MYTHREADTRANSFERMESSAGE_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include <QHostAddress>
#include <QList>
#include <QByteArray>
#include <QPoint>
#include <QMutex>
class MyThreadTransferMessage :public QThread
{
    Q_OBJECT
public:
    MyThreadTransferMessage(QObject* parent=0);
    ~MyThreadTransferMessage();
protected:
    //接收消息，翻译并调用各个函数
    void run();
private:
    QTcpSocket* socket;
    QList<QByteArray> DataQueue;
    QAbstractSocket::SocketState state;
    QMutex mutex;
    void Hello();
signals:
    void Broadcast_Connect_Success(bool success);
    void Broadcast_Received_Steps(QVector<QPoint> Steps);
    void Broadcast_Begin(bool first);
    void Broadcast_Enemy_Lost();
    void Broadcast_Reply_Surrender(bool reply);
    void Broadcast_Request_Surrender();
    void Broadcast_Reply_Peace(bool reply);
    void Broadcast_Request_Peace();
    void Broadcast_Received_Chat(QString message);
    void Broadcast_Enemy_Fail();//对方无子可走
public slots:
    //来自socket
    void on_socket_stateChange(QAbstractSocket::SocketState state_);//来自socket,监视状态
    void on_socket_Recv();//标记socket可以接收了
    //来自GUI
    void on_Connect(QString IP,int com);
    void on_Ready();
    void on_Send_Steps(QVector<QPoint> Steps);
    void on_Request_Peace();
    void on_Request_Surrender();
    void on_Reply_Peace(bool agree);
    void on_Reply_Surrender(bool agree);
    void on_Chat(QString message);
    void on_Fail();//我方无子可走
    void on_End();//发给服务器
};

#endif // MYTHREADTRANSFERMESSAGE_H
