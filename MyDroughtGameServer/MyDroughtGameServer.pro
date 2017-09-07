#-------------------------------------------------
#
# Project created by QtCreator 2017-09-06T15:33:30
#
#-------------------------------------------------

QT       += core gui
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyDroughtGameServer
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    MyDroughtServer.cpp

HEADERS  += dialog.h \
    MyDroughtServer.h

FORMS    += dialog.ui
