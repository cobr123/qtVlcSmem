#-------------------------------------------------
#
# Project created by QtCreator 2011-06-22T15:41:15
#
#-------------------------------------------------

QT       += core gui

TARGET = vlcSmem
TEMPLATE = app

LIBS += -I"C:\Users\rtabulov\qt\qtVlc\vlcSrc\include"
LIBS += -L"C:\Users\rtabulov\qt\qtVlc\vlcBin" #if you are at windows os
LIBS += -llibvlc

SOURCES += main.cpp \
    streamplayer.cpp

HEADERS  += \
    include/streamplayer.h
