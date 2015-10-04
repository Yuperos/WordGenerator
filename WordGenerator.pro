#-------------------------------------------------
#
# Project created by QtCreator 2015-08-25T19:58:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WordGenerator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    graph.cpp \
    alphabet.cpp

HEADERS  += mainwindow.h \
    graph.h \
    alphabet.h

FORMS    += mainwindow.ui
