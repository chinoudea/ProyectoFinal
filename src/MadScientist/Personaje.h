/**
 * Project Scientist Escape
 */

#ifndef _PERSONAJE_H
#define _PERSONAJE_H
#include <QGraphicsPixmapItem>
#include <QDebug>
#include <QKeyEvent>
#include "Arma.h"

class Personaje:public QObject,  public QGraphicsPixmapItem {

public: 
    /*
     * Constructor
     */
    Personaje(QGraphicsItem *parent = 0);
    /*
     * Atributos del objeto
     */
    QString nombre; //Nombre del personaje
    unsigned int nivelVida;  //Nivel de vida del personaje
    unsigned char direccion;  //Direccion en la que se esta moviendo
    unsigned char accionUsuario;  //Direccion en la que se esta moviendo
    double velocidadX; //Velocidad horizontal del personaje
    double aceleracionX; //Aceleración horizontal del personaje
    double velocidadY; //Velocidad veritical del personaje
    double aceleracionY; //Aceleración vertical del personaje
    double unidadTiempo;
    QVector <QString> setPics; //Arreglo de imagenes para movimiento
    unsigned int ubicacion; //Ubicacion en el nivel segun desplazamiento.
    double deltaMove; //Delta de movimiento
    unsigned char indexPic;
    Arma arma;

    /**
     * @param nombre
     */
    void setNombre(QString nombre);

    /**
     * @param cantidad
     */
    void updateVida(int cantidad);
    void setDireccion(int value);
    /**
     * @param direccion
     */
    void mover();


};

#endif //_PERSONAJE_H
