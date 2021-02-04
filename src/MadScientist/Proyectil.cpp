/**
 * Project Mad Scientist Scape
 */


#include "Proyectil.h"

/**
 * Proyectil implementation
 */




Proyectil::Proyectil(QString tipo, unsigned char direction)
{

    direccion = direction;
    setPixmap(QPixmap(":/projectile/"+tipo));
    setScale(0.45);
    QTimer * timeBala = new QTimer();
    connect(timeBala,SIGNAL(timeout()),this,SLOT(mover()));
    timeBala->start(20);
}


void Proyectil::mover()
{
    setPos(x()+5,y());
    QList<QGraphicsItem*> colisiones = this->collidingItems();
    for (int i = 0; i< colisiones.size(); i++) {
       if (typeid((*colisiones[i]))== typeid(Enemigo)) {
           scene()->removeItem(colisiones[i]); // cambiar por animacion
           scene()->removeItem(this);           
           //delete colisiones[i];
           //delete this;
       }
    }
}
