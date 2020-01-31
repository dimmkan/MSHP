TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        account.cpp \
        bank.cpp \
        main.cpp \
        order.cpp

HEADERS += \
    account.h \
    bank.h \
    order.h
