#include "MyThreadTransferMessage.h"
#include <QDataStream>
MyThreadTransferMessage::MyThreadTransferMessage(QObject *parent)
{
    socket=new QTcpSocket;
    connect(socket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(on_socket_stateChange(QAbstractSocket::SocketState)));
}
MyThreadTransferMessage::~MyThreadTransferMessage()
{
    socket->disconnectFromHost();
    socket->waitForDisconnected();
    delete socket;
}
void MyThreadTransferMessage::on_socket_stateChange(QAbstractSocket::SocketState state_)//来自socket,监视状态
{
    state=state_;
    QString tstate;
    if(state==QAbstractSocket::UnconnectedState)
        tstate="Unconnected";
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
    qDebug()<<"--ThreadT: socket state change to : "<<tstate;
}
void MyThreadTransferMessage::on_socket_Recv()//接收数据放入QList队列
{
    qDebug()<<"on_socket_Recv()";
    QByteArray temdata=socket->readAll();
    mutex.lock();
    DataQueue.push_back(temdata);
    mutex.unlock();
}
void MyThreadTransferMessage::run()//Parse队列QList中数据
{
    while(1)
    {
        if(state==QAbstractSocket::ConnectedState)
        {
            socket->waitForReadyRead(INFINITY);
            //parse数据
            mutex.lock();
            QByteArray data=socket->readAll();
            mutex.unlock();
            QDataStream datastream(&data,QIODevice::ReadWrite);
            datastream.setVersion(QDataStream::Qt_5_6);
            while(!datastream.atEnd())
            {
                QString command;
                datastream>>command;
                qDebug()<<"Command: "<<command;
                if(command=="S")//敌方走步Steps
                {
                    int stepNumber=0;
                    datastream>>stepNumber;
                    qDebug("%d Steps:",stepNumber);
                    QVector<QPoint> steps;
                    for(int i=0;i<stepNumber;i++)
                    {
                        int index=0;
                        datastream>>index;
                        index=99-index;
                        steps.push_back(QPoint(index%10,index/10));
                        qDebug("(%d,%d)",index%10,index/10);
                    }
                    emit Broadcast_Received_Steps(steps);
                }
                else if(command=="H")//Hellos
                {
                    QString hello;
                    datastream>>hello;
                    qDebug()<<hello;
                }
                else if(command=="B")//游戏开始
                {
                    qDebug()<<"Begin";
                    int first;
                    datastream>>first;
                    if(first>0)
                        emit Broadcast_Begin(true);
                    else
                        emit Broadcast_Begin(false);
                }
                else if(command=="L")//敌方断连
                {
                    emit Broadcast_Enemy_Lost();
                }
                else if(command=="R")//投降、求和的Request和Reply信息
                {
                    QString temc;
                    datastream>>temc;
                    if(temc=="S")//与投降相关
                    {
                        datastream>>temc;
                        if(temc=="Y")
                            emit Broadcast_Reply_Surrender(true);
                        else if(temc=="N")
                            emit Broadcast_Reply_Surrender(false);
                        else if(temc=="R")
                            emit Broadcast_Request_Surrender();
                    }
                    else if(temc=="P")//与求和相关
                    {
                        datastream>>temc;
                        if(temc=="Y")
                            emit Broadcast_Reply_Peace(true);
                        else if(temc=="N")
                            emit Broadcast_Reply_Peace(false);
                        else if(temc=="R")
                            emit Broadcast_Request_Peace();
                    }
                }
                else if(command=="C")//聊天chat信息
                {
                    QString temc;
                    datastream>>temc;
                    emit Broadcast_Received_Chat(temc);
                }
                else if(command=="F")
                {
                    emit Broadcast_Enemy_Fail();
                }
                else if(command=="AutoPeace")
                {
                    emit Broadcast_AutoPeace();
                }
            }
        }
    }
    qDebug("Not Connected");
}
void MyThreadTransferMessage::on_Connect(QString IP,int com)//请求连接并发送H,发射连接成功失败信号
{
    socket->disconnectFromHost();
    socket->connectToHost(QHostAddress(IP),com);
    socket->waitForConnected();
    if(state==QAbstractSocket::ConnectedState)
    {
        Hello();
        emit Broadcast_Connect_Success(true);
    }
    else
        emit Broadcast_Connect_Success(false);
}
void MyThreadTransferMessage::on_Ready()//准备,等待服务器匹配
{
    QByteArray ByteMessage;
    ByteMessage.clear();
    QDataStream data(&ByteMessage,QIODevice::ReadWrite);
    data.setVersion(QDataStream::Qt_5_6);
    data<<QString("Ready");
    socket->write(ByteMessage);
    msleep(200);
}
void MyThreadTransferMessage::on_Send_Steps(QVector<QPoint> Steps)//按照index下标发送走步信息
{
    QByteArray ByteMessage;
    ByteMessage.clear();
    QDataStream data(&ByteMessage,QIODevice::ReadWrite);
    data.setVersion(QDataStream::Qt_5_6);
    data<<QString("S");
    data<<int(Steps.size());
    for(int i=0;i<Steps.size();i++)
        data<<int(Steps[i].x()+Steps[i].y()*10);
    socket->write(ByteMessage);
    msleep(200);
}
void MyThreadTransferMessage::on_Request_Peace()
{
    QByteArray ByteMessage;
    ByteMessage.clear();
    QDataStream data(&ByteMessage,QIODevice::ReadWrite);
    data.setVersion(QDataStream::Qt_5_6);
    data<<QString("R")<<QString("P")<<QString("R");
    socket->write(ByteMessage);
    msleep(200);
}
void MyThreadTransferMessage::on_Request_Surrender()
{
    QByteArray ByteMessage;
    ByteMessage.clear();
    QDataStream data(&ByteMessage,QIODevice::ReadWrite);
    data.setVersion(QDataStream::Qt_5_6);
    data<<QString("R")<<QString("S")<<QString("R");
    socket->write(ByteMessage);
    msleep(200);
}
void MyThreadTransferMessage::on_Reply_Peace(bool agree)
{
    QByteArray ByteMessage;
    ByteMessage.clear();
    QDataStream data(&ByteMessage,QIODevice::ReadWrite);
    data.setVersion(QDataStream::Qt_5_6);
    data<<QString("R")<<QString("P");
    if(agree)
        data<<QString("Y");
    else
        data<<QString("N");
    socket->write(ByteMessage);
    msleep(200);
}
void MyThreadTransferMessage::on_Reply_Surrender(bool agree)
{
    QByteArray ByteMessage;
    ByteMessage.clear();
    QDataStream data(&ByteMessage,QIODevice::ReadWrite);
    data.setVersion(QDataStream::Qt_5_6);
    data<<QString("R")<<QString("S");
    if(agree)
        data<<QString("Y");
    else
        data<<QString("N");
    socket->write(ByteMessage);
    socket->waitForBytesWritten();
    msleep(200);
}
void MyThreadTransferMessage::on_Chat(QString message)
{
    QByteArray ByteMessage;
    ByteMessage.clear();
    QDataStream data(&ByteMessage,QIODevice::ReadWrite);
    data.setVersion(QDataStream::Qt_5_6);
    data<<QString("C")<<message;
    socket->write(ByteMessage);
    msleep(200);
}
void MyThreadTransferMessage::on_Fail()
{
    QByteArray ByteMessage;
    ByteMessage.clear();
    QDataStream data(&ByteMessage,QIODevice::ReadWrite);
    data.setVersion(QDataStream::Qt_5_6);
    data<<QString("F");
    socket->write(ByteMessage);
    msleep(200);
}
void MyThreadTransferMessage::on_End()
{
    QByteArray ByteMessage;
    ByteMessage.clear();
    QDataStream data(&ByteMessage,QIODevice::ReadWrite);
    data.setVersion(QDataStream::Qt_5_6);
    data<<QString("E");
    socket->write(ByteMessage);
    msleep(200);
}
void MyThreadTransferMessage::Hello()
{
    QByteArray ByteMessage;
    ByteMessage.clear();
    QDataStream data(&ByteMessage,QIODevice::ReadWrite);
    data.setVersion(QDataStream::Qt_5_6);
    data<<QString("H")<<QString("Hello");
    socket->write(ByteMessage);
    msleep(200);
}
void MyThreadTransferMessage::on_LogOut()
{
    qDebug()<<"Log Out";
    socket->disconnectFromHost();
}
void MyThreadTransferMessage::on_AutoPeace()
{
    QByteArray ByteMessage;
    ByteMessage.clear();
    QDataStream data(&ByteMessage,QIODevice::ReadWrite);
    data.setVersion(QDataStream::Qt_5_6);
    data<<QString("AutoPeace");
    socket->write(ByteMessage);
    msleep(200);
}
