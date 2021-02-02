/**
 * Project Mad Scientist Scape
 */


#include "Personaje.h"

#include <QPixmap>

/**
 * Personaje implementation
 */


/**
 * @param direccion
 */
Personaje::Personaje(QGraphicsItem *parent)
{
    direccion = 2;
    indexPic = 0;
    unidadTiempo = 0.02;// 20 milisegundos
    velocidadX=0;
    accionUsuario=0;
}

void Personaje::mover() {
    //Se valida si hay accion de usuario sobre el personaje.
    switch (accionUsuario) {
        case 0: //Inercia del movimiento
            if (velocidadX>0) {
                velocidadX-=50;
                velocidadX = velocidadX < 0 ? 0 : velocidadX;
            } else if (velocidadX<0) {
                velocidadX+=50;
                velocidadX = velocidadX > 0 ? 0 : velocidadX;
            }
            break;
        case 1: //Movimiento a la izquierda
            velocidadX-=5;
            velocidadX = velocidadX < -500 ? -500 : velocidadX;
            break;
        case 2: //Movimiento a la derecha
            velocidadX+=5;
            velocidadX = velocidadX > 500 ? 500 : velocidadX;
            break;
        case 3: //Movimiento de salto
            break;
    }
    if (velocidadX != 0) {
        deltaMove = velocidadX * unidadTiempo;
        setX(pos().x() + ceil(deltaMove));
        if (indexPic>=setPics.size()) indexPic = 0;
        //qDebug() << setPics.value(indexPic);
        setPixmap(QPixmap(setPics.value(indexPic)));
        indexPic++;
    }
    /*
        switch (direccion) {
            case 0: //Sin movimiento
                break;
            case 1: //Movimiento a la izquierda
                deltaMove = velocidadX * unidadTiempo;
                setX(pos().x() + ceil(deltaMove));
                break;
            case 2: //Movimiento a la derecha
                deltaMove = velocidadX * unidadTiempo;
                setX(pos().x() + ceil(deltaMove));
                if (indexPic>=setPics.size()) indexPic = 0;
                //qDebug() << setPics.value(indexPic);
                setPixmap(QPixmap(setPics.value(indexPic)));
                indexPic++;
                break;
            case 3: //Movimiento de salto
                break;
        }*/
}


/**
 * @brief Personaje::setDireccion
 * @param value
 */
void Personaje::setDireccion(int value)
{
    direccion = value;
}
/**
 * @param nombre
 */
void Personaje::setNombre(QString name) {
    nombre = name;
}

/**
 * @param cantidad
 */
void Personaje::updateVida(int cantidad) {
    nivelVida = cantidad;
}
