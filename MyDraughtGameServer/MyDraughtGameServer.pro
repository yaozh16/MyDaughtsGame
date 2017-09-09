#-------------------------------------------------
#
# Project created by QtCreator 2017-09-06T15:33:30
#
#-------------------------------------------------

QT       += core gui
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyDraughtGameServer
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    MyDraughtServer.cpp

HEADERS  += dialog.h \
    MyDraughtServer.h

FORMS    += dialog.ui
