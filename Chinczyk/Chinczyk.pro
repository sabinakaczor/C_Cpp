#-------------------------------------------------
#
# Project created by QtCreator 2017-01-09T12:26:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Chinczyk
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gracz.cpp \
    rejestracja.cpp \
    rozgrywka.cpp

HEADERS  += mainwindow.h \
    gracz.h \
    rejestracja.h \
    rozgrywka.h

FORMS    += mainwindow.ui \
    rejestracja.ui
