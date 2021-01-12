/**
 * Project Mad Scientist Scape
 */
#ifndef _ARMA_H
#define _ARMA_H

#include <QString>
#include <Proyectil.h>

class Arma {
public: 
    QString tipo;
    //QPixmap[] setPics;
    Proyectil *proyectil;
    
void actuarArma();
};

#endif //_ARMA_H
