/**
 * Project Scientist Escape
 */


#ifndef _CIENTIFICO_H
#define _CIENTIFICO_H

#include <QList>
#include "Personaje.h"


class Cientifico: public Personaje {
public: 
    /*
     * Constructor
     */
    Cientifico(QGraphicsItem *parent = 0);
    /**
     * @param tipo
     */
    void lanzarExplosivo(QString tipo);

    void lanzarDinamita();

    void colisionar();

    void usarArma();

    void saltar();

    void cambiarArma();

    void configPics(unsigned char numPics);

};

#endif //_CIENTIFICO_H
