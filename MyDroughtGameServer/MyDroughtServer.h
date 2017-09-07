#ifndef MYDROUGHTSERVER_H
#define MYDROUGHTSERVER_H
#include <QThread>
#include <QtNetwork>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QMap>
#include <QMutex>
class MyDroughtServer: public QThread
{
    Q_OBJECT
public:
    MyDroughtServer();
    ~MyDroughtServer();
private:
    QTcpServer* server;
    QMutex mutex;

    QMap<QTcpSocket*,int>    MapToIndex;    //从套接字到数字的映射(从0开始)
    QMap<int,QTcpSocket*>    MapToSocket;   //从数字到套接字的映射(从0开始)

    QList<int> NotReadyClient;              //未准备的socket
    QList<int> ReadyClient;                 //准备的socket
    QMap<int,int> Rooms;                    //这里把两个TcpSocket对应映射起来,一个链接保存两次

protected:
    void run();
signals:
    void Broadcast_Message(QString message);
    void Broadcast_State(int notready,int ready,int room);
public slots:
    void on_new_connection();
    void on_socket_disconnection(int SocketIndex);
    void on_Receive_Message();
    void on_socket_state_change(QAbstractSocket::SocketState state);
    void on_BroadcastState();
};

#endif // MYDROUGHTSERVER_H
