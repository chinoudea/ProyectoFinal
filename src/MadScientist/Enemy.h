#ifndef ENEMY_H
#define ENEMY_H

#include <QList>
#include <QTimer>
#include <QGraphicsScene>
#include "Personaje.h"

class Enemy : public Personaje {

public:
    Enemy();

    QString tipoEnemigo;

    QMap<QString,unsigned char> enemyPics;

    void usarArma();

    void configPics();

    void medirDistancia();

    void setTipoEnemigo(const QString &value);

};

#endif // ENEMY_H
