#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    server=new MyDraughtServer;
    connect(server,SIGNAL(Broadcast_Message(QString)),this,SLOT(DisplayMessage(QString)));
    connect(server,SIGNAL(Broadcast_State(int,int,int)),this,SLOT(DisplayState(int,int,int)));
    server->start();
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::DisplayMessage(QString Message)
{
    ui->textEdit->append(Message);
}
void Dialog::DisplayState(int notready,int ready,int room)
{
    ui->lcdNumber->display(QString::number(notready));
    ui->lcdNumber_2->display(QString::number(ready));
    ui->lcdNumber_3->display(QString::number(room));
}
