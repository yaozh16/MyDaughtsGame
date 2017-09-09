#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "MyDraughtServer.h"
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
    MyDraughtServer* server;
public slots:
    void DisplayMessage(QString Message);
    void DisplayState(int notready,int ready,int room);
};

#endif // DIALOG_H
