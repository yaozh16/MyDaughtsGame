#-------------------------------------------------
#
# Project created by QtCreator 2017-09-05T13:55:03
#
#-------------------------------------------------

QT       += core
QT       += gui
QT       += network
QT       += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyDraughtsGameClient
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    MyThreadTransferMessage.cpp \
    MyThreadCaculate.cpp

HEADERS  += dialog.h \
    MyThreadCaculate.h \
    MyThreadTransferMessage.h

FORMS    += dialog.ui

RESOURCES += \
    mydraughtsgame.qrc
