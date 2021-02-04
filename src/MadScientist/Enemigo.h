#ifndef ENEMY_H
#define ENEMY_H

#include <QList>
#include <QTimer>
#include <QGraphicsScene>
#include "Personaje.h"



class Enemigo : public Personaje {

public:
    //Constructor
    Enemigo();

private:

    QMap<QString,unsigned char> enemyPics;
    void usarArma();
    void medirDistancia();

};

#endif // ENEMY_H
