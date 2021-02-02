QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Arma.cpp \
    Ayuda.cpp \
    Cientifico.cpp \
    DataConnector.cpp \
    Enemy.cpp \
    Explosivo.cpp \
    Juego.cpp \
    Jugador.cpp \
    Nivel.cpp \
    Obstaculo.cpp \
    Partida.cpp \
    Personaje.cpp \
    Proyectil.cpp \
    Usuario.cpp \
    main.cpp

HEADERS += \
    Arma.h \
    Ayuda.h \
    Cientifico.h \
    DataConnector.h \
    Enemy.h \
    Explosivo.h \
    Juego.h \
    Jugador.h \
    Nivel.h \
    Obstaculo.h \
    Partida.h \
    Personaje.h \
    Proyectil.h \
    Usuario.h

FORMS += \
    Juego.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
