#include "MyDraughtServer.h"
#include <QDataStream>
#include <random>
#include <QTimer>
MyDraughtServer::MyDraughtServer()
{
    server=new QTcpServer;
    server->listen(QHostAddress::Any,6666);
    QTimer* timer=new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(on_BroadcastState()));
    timer->start(500);
    connect(server,SIGNAL(newConnection()),this,SLOT(on_new_connection()));
}
MyDraughtServer::~MyDraughtServer()
{}
void MyDraughtServer::on_new_connection()
{

    QTcpSocket* socket=server->nextPendingConnection();
    //查找一个可用ID
    int index=0;
    while(MapToSocket.contains(index))
        index+=1;
    //保存映射
    MapToIndex.insert(socket,index);
    MapToSocket.insert(index,socket);
    NotReadyClient.push_back(index);
    emit Broadcast_Message("Server: Socket Connected: ID = "+QString::number(index));

    //发送Test
    QByteArray data;
    QDataStream datastream(&data,QIODevice::ReadWrite);
    datastream.setVersion(QDataStream::Qt_5_6);
    QString command="Test";
    datastream<<command;
    socket->write(data);
    socket->waitForBytesWritten(100);

    connect(socket,SIGNAL(readyRead()),this,SLOT(on_Receive_Message()));
    connect(socket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(on_socket_state_change(QAbstractSocket::SocketState)));
}
void MyDraughtServer::on_Receive_Message()
{
    QTcpSocket* socket=qobject_cast<QTcpSocket*>(sender());
    QByteArray reply;
    reply.clear();
    QDataStream replystream(&reply,QIODevice::ReadWrite);
    replystream.setVersion(QDataStream::Qt_5_6);

    QByteArray data=socket->readAll();
    QDataStream datastream(&data,QIODevice::ReadWrite);
    datastream.setVersion(QDataStream::Qt_5_6);
    QString command;
    datastream>>command;


    int SocketIndex=MapToIndex[socket];
    emit Broadcast_Message(QString("Socket ")+QString::number(SocketIndex)
                           +" command: "+command
                           +">>>command size:"+QString::number(command.size()));

    if(Rooms.contains(SocketIndex))//已经在Room中
    {
        int TheOtherSocketIndex=Rooms[SocketIndex];
        if(command=="E")
        {

            Rooms.remove(SocketIndex);
            Rooms.remove(TheOtherSocketIndex);
            NotReadyClient.push_back(SocketIndex);
            NotReadyClient.push_back(TheOtherSocketIndex);
            emit Broadcast_Message("A Room is Dismissed");
            emit Broadcast_Message("Player "+QString::number(SocketIndex)+" Returned To NotReady");
            emit Broadcast_Message("Player "+QString::number(TheOtherSocketIndex)+" Returned To NotReady");
        }
        else
        {
            MapToSocket[TheOtherSocketIndex]->write(data);
            MapToSocket[TheOtherSocketIndex]->waitForBytesWritten(200);
        }
    }
    else if(NotReadyClient.contains(SocketIndex))//Not Ready Client检查是不是发来Ready
    {
        if(command=="Ready")
        {
            emit Broadcast_Message("Player "+QString::number(SocketIndex)+" is Ready");
            NotReadyClient.removeOne(SocketIndex);
            ReadyClient.push_back(SocketIndex);
            QString MyReply="Server is Trying to Match...";
            replystream<<QString("C")<<MyReply;
            MapToSocket[SocketIndex]->write(reply);
            MapToSocket[SocketIndex]->waitForBytesWritten(200);
        }
    }

}
void MyDraughtServer::on_socket_state_change(QAbstractSocket::SocketState state)
{
    QTcpSocket* socket=qobject_cast<QTcpSocket*>(sender());
    int SocketIndex=MapToIndex[socket];
    QString tstate;
    if(state==QAbstractSocket::UnconnectedState)
    {
        tstate="Unconnected";
        on_socket_disconnection(SocketIndex);
    }
    else if(state==QAbstractSocket::HostLookupState)
        tstate="HostLookup";
    else if(state==QAbstractSocket::ConnectingState)
        tstate="Connecting";
    else if(state==QAbstractSocket::ConnectedState)
        tstate="Connected";
    else if(state==QAbstractSocket::BoundState)
        tstate="Bound";
    else if(state==QAbstractSocket::ClosingState)
        tstate="Closing";
    else if(state==QAbstractSocket::ListeningState)
        tstate="Listening";
    else
        tstate="Unknown state";
    qDebug()<<"Server: socket state change to : "<<tstate;
    emit Broadcast_Message("Server: Socket "+QString::number(SocketIndex)+" state change to : "+tstate);
}
void MyDraughtServer::on_socket_disconnection(int SocketIndex)
{
    mutex.lock();
    QTcpSocket* socket=MapToSocket[SocketIndex];
    MapToIndex.remove(socket);
    MapToSocket.remove(SocketIndex);
    if(Rooms.contains(SocketIndex))
    {
        int TheOtherSocketIndex=Rooms[SocketIndex];
        QByteArray reply;
        reply.clear();
        QDataStream replystream(&reply,QIODevice::ReadWrite);
        replystream.setVersion(QDataStream::Qt_5_6);
        replystream<<QString("L");
        MapToSocket[TheOtherSocketIndex]->write(reply);
        MapToSocket[TheOtherSocketIndex]->waitForBytesWritten(200);
        Rooms.remove(SocketIndex);
        Rooms.remove(TheOtherSocketIndex);
        NotReadyClient.push_back(TheOtherSocketIndex);
    }
    else if(ReadyClient.contains(SocketIndex))
        ReadyClient.removeOne(SocketIndex);
    else if(NotReadyClient.contains(SocketIndex))
        NotReadyClient.removeOne(SocketIndex);
    mutex.unlock();
}

void MyDraughtServer::run()
{
    while(1)
    {
        if(ReadyClient.size()>1)
        {
            int socketAIndex=ReadyClient.at(0);
            int socketBIndex=ReadyClient.at(1);

            srand(QTime::currentTime().msecsSinceStartOfDay());
            int x=rand()%2;

            QByteArray data1;
            data1.clear();
            QDataStream datastream1(&data1,QIODevice::ReadWrite);
            datastream1<<QString("B");
            datastream1<<int(1-x);
            emit Broadcast_Message(QString("tell ready player1"));
            MapToSocket[socketAIndex]->write(data1);
            MapToSocket[socketAIndex]->waitForBytesWritten(100);


            QByteArray data2;
            data2.clear();
            QDataStream datastream2(&data2,QIODevice::ReadWrite);
            datastream2<<QString("B");
            datastream2<<int(x);
            emit Broadcast_Message(QString("tell ready player2"));
            MapToSocket[socketBIndex]->write(data2);
            MapToSocket[socketBIndex]->waitForBytesWritten(100);


            Rooms.insert(socketAIndex,socketBIndex);
            Rooms.insert(socketBIndex,socketAIndex);
            ReadyClient.pop_front();
            ReadyClient.pop_front();
            emit Broadcast_Message(QString("A Room is Built:"));
            emit Broadcast_Message("Player "+QString::number(socketAIndex)+" In Room");
            emit Broadcast_Message("Player "+QString::number(socketBIndex)+" In Room");
        }
    }
}
void MyDraughtServer::on_BroadcastState()
{
   emit Broadcast_State(NotReadyClient.size(),ReadyClient.size(),Rooms.size()/2);
}
