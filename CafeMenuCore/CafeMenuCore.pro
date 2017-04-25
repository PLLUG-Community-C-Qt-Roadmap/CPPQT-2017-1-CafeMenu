TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    menuitem.cpp \
    abstractmenuitem.cpp \
    menugroup.cpp \
    consoleprintmenuvisitor.cpp

HEADERS += \
    menuitem.h \
    abstractmenuitem.h \
    menugroup.h \
    abstractvisitor.h \
    consoleprintmenuvisitor.h

