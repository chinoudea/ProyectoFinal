/**
 * Project Mad Scientist Scape
 */


#include "Personaje.h"

/**
 * Personaje implementation
 */


/**
 * @param direccion
 */
Personaje::Personaje(QGraphicsItem *parent)
{

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
