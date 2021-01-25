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
}

void Personaje::mover() {
    switch (direccion) {
    case 0: //Sin movimiento
        break;
    case 1: //Movimiento a la izquierda
        setX(pos().x() - deltaMove);
        break;
    case 2: //Movimiento a la derecha
        setX(pos().x() + deltaMove);        
        if (indexPic>=setPics.size()) indexPic = 0;
        qDebug() << setPics.value(indexPic);
        setPixmap(QPixmap(setPics.value(indexPic)));
        indexPic++;
        break;
    case 3: //Movimiento de salto
        break;
    }
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
