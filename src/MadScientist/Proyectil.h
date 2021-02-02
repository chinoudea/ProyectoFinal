/**
 * Project Mad Scientist Scape
 */


#ifndef _PROYECTIL_H
#define _PROYECTIL_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>
#include "Enemy.h"

class Proyectil: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:     
    Proyectil(QString tipo, unsigned char direction);
    int tipo;
    unsigned char direccion;

public slots:
    void mover();
    

};

#endif //_PROYECTIL_H
