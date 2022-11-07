TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        camion.cpp \
        main.cpp \
        scooter.cpp \
        vehicule.cpp \
        voiture.cpp

HEADERS += \
    camion.h \
    scooter.h \
    vehicule.h \
    voiture.h
