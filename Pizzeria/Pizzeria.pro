TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Pizza.cpp \
    annualreport.cpp \
    spending.cpp \
    spendinglist.cpp \
    spendinginputscreen.cpp \
    globalmethods.cpp \
    income.cpp \
    incomelist.cpp \
    incomeinputscreen.cpp \
    goods.cpp \
    goodslist.cpp \
    goodsinputscreen.cpp \
    userinterface.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Pizza.h \
    annualreport.h \
    spending.h \
    spendinglist.h \
    spendinginputscreen.h \
    globalmethods.h \
    income.h \
    incomelist.h \
    incomeinputscreen.h \
    goods.h \
    goodslist.h \
    goodsinputscreen.h \
    userinterface.h \
    libs.h

DISTFILES +=

