/**
 * Project Scientist Escape
 */

#ifndef _PERSONAJE_H
#define _PERSONAJE_H
#include <QGraphicsPixmapItem>
#include "Arma.h"

class Personaje: public QGraphicsPixmapItem {
public: 
    /*
     * Constructor
     */
    Personaje(QGraphicsItem *parent = 0);
    /*
     * Atributos del objeto
     */
    QString nombre; //Nombre del personaje
    int nivelVida;  //Nivel de vida del personaje
    int direccion;  //Direccion en la que se esta moviendo
    double velocidadX; //Velocidad horizontal del personaje
    double aceleracionX; //Aceleración horizontal del personaje
    double velocidadY; //Velocidad veritical del personaje
    double aceleracionY; //Aceleración vertical del personaje
    QList <QString[]> * setPics; //Arreglo de imagenes para cada movimiento
    int ubicacion; //Ubicacion en el nivel segun desplazamiento.
    int deltaMove; //Delta de movimiento
    Arma arma;
/**
 * @param direccion
 */
void mover();
    
/**
 * @param nombre
 */
void setNombre(QString nombre);
    
/**
 * @param cantidad
 */
void updateVida(int cantidad);
void setDireccion(int value);
};

#endif //_PERSONAJE_H
