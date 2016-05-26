QT += core gui
QT += opengl

CONFIG += c++11

TARGET = video_game_menus
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    menu_handler.cpp \
    glbutton.cpp

HEADERS += \
    menu_handler.h \
    glbutton.h

DISTFILES += \
    buttons.fsh \
    buttons.vsh

RESOURCES += \
    qrc.qrc
