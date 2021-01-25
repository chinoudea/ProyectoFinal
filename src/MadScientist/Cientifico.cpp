/**
 * Project Mad Scientist Scape
 */


#include "Cientifico.h"

/**
 * Cientifico implementation
 */


/**
 * @param tipo
 */
Cientifico::Cientifico(QGraphicsItem *parent)
{
    setNombre("name"); //Se configura el nombre del cientifico
    setPixmap(QPixmap(":/scientist/gun0/walk/0"));
    //setPixmap(QPixmap(":/scientist/Gun0_Walk0"));
    //setPixmap(QPixmap(":/scientist/Gun0_Walk0").copy(160,225,360,275).scaledToHeight(250));
    setPos(0,0);    
    configPics(14);
    deltaMove = 5;
    //configImagenes(0);
}

void Cientifico::lanzarExplosivo(QString tipo) {

}

void Cientifico::lanzarDinamita() {

}

void Cientifico::colisionar() {

}

void Cientifico::usarArma() {

}

void Cientifico::saltar() {

}

void Cientifico::cambiarArma() {

}

void Cientifico::configPics(unsigned char numPics) {
    setPics.clear();
    indexPic = 0;
    for (unsigned char i=0; i<numPics; i++) {
        setPics.append(":/scientist/gun0/walk/" + QString::number(i));
    }
}
