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
    velocidadY=0;
    accionUsuario=0;
    tiempoVuelo=0;
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
            velocidad0 = velocidadX;
            break;
        case 1: //Movimiento a la izquierda
            velocidadX-=5;
            velocidadX = velocidadX < -500 ? -500 : velocidadX;
            velocidad0 = velocidadX;
            break;
        case 2: //Movimiento a la derecha
            velocidadX+=5;
            velocidadX = velocidadX > 500 ? 500 : velocidadX;
            velocidad0 = velocidadX;
            break;
        case 3: //Movimiento de salto
            tiempoVuelo += unidadTiempo;
            if (velocidad0!=0) {
                anguloSalto = 60;
                velocidadX = (velocidad0 * cos(anguloSalto*pi/180));
                deltaMoveY = - ceil(abs(velocidad0)*sin(anguloSalto*pi/180)*tiempoVuelo) + ceil(g*pow(tiempoVuelo,2)/2) ;
                setY(deltaMoveY);
                qDebug() << "Posicion en Y= " << pos().y();
                if (pos().y()>0) {
                    setY(0);
                    accionUsuario=0;
                    tiempoVuelo=0;
                }
            } else {
                anguloSalto = 90;
                deltaMoveY = - ceil(abs(700)*sin(anguloSalto*pi/180)*tiempoVuelo) + ceil(g*pow(tiempoVuelo,2)/2) ;
                setY(deltaMoveY);
                qDebug() << "Posicion en Y= " << pos().y();
                if (pos().y()>0) {
                    setY(0);
                    accionUsuario=0;
                    tiempoVuelo=0;
                }
            }
            break;
    }
    if (velocidadX != 0) {
        deltaMoveX = velocidadX * unidadTiempo;
        setX(pos().x() + ceil(deltaMoveX));
        if (accionUsuario!=3) {
            if (indexPic>=setPics.size()) indexPic = 0;
            //qDebug() << setPics.value(indexPic);
            setPixmap(QPixmap(setPics.value(indexPic)));
            indexPic++;
        }
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
