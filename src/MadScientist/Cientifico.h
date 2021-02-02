/**
 * Project Scientist Escape
 */


#ifndef _CIENTIFICO_H
#define _CIENTIFICO_H

#include <QList>
#include <QGraphicsScene>
#include "Personaje.h"
#include "Proyectil.h"


class Cientifico: public Personaje {
public: 
    /*
     * Constructor
     */
    Cientifico(QGraphicsItem *parent = 0);
    QMap<QString,unsigned char> armasPics;
    /**
     * @param tipo
     */
    void lanzarExplosivo(QString tipo);

    void lanzarDinamita();

    void colisionar();

    void usarArma();

    void saltar();

    void cambiarArma();        

    void configPics(QString tipoArma);

    // QGraphicsItem interface
protected:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

};

#endif //_CIENTIFICO_H
