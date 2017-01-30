#-------------------------------------------------
#
# Project created by QtCreator 2016-12-18T17:59:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = simpleCanvas
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    rejestracjagraczy.cpp \
    gra.cpp \
    personaldialog.cpp \
    gracz.cpp \
    pionek.cpp

HEADERS  += mainwindow.h \
    rejestracjagraczy.h \
    gra.h \
    personaldialog.h \
    gracz.h \
    pionek.h

FORMS    += mainwindow.ui \
    rejestracjagraczy.ui \
    gra.ui \
    personaldialog.ui
