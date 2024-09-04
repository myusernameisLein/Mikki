TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Pizza.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Pizza.h

