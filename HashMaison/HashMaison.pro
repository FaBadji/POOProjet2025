#-------------------------------------------------
#
# Project created by QtCreator 2025-05-19T02:05:59
#
#-------------------------------------------------

QT       += core gui
QT       += sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HashMaison
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    maison.cpp \
    TableHashage.cpp

HEADERS  += mainwindow.h \
    connexiondb.h \
    TableHashage.hpp \
    maison.hpp

FORMS    += mainwindow.ui
