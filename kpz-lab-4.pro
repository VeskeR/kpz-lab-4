#-------------------------------------------------
#
# Project created by QtCreator 2016-05-31T15:36:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = kpz-lab-4
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    strategy.cpp \
    ascendingsortstrategy.cpp \
    descendingsortstrategy.cpp

HEADERS  += dialog.h \
    strategy.h \
    ascendingsortstrategy.h \
    descendingsortstrategy.h

FORMS    += dialog.ui
