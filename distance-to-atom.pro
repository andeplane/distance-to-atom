TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle

LIBS += -L/usr/local/lib -lgsl
INCLUDEPATH += /usr/local/include

SOURCES += main.cpp \
    distancetoatom.cpp

HEADERS += \
    distancetoatom.h

