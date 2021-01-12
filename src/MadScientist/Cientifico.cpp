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
Cientifico::Cientifico(QString name)
{
    setNombre(name); //Se configura el nombre del cientifico
    setPixmap(QPixmap(":/scientist/Gun0_Idle0"));
    //setPixmap(QPixmap(":/scientist/Gun0_Walk0"));
    //setPixmap(QPixmap(":/scientist/Gun0_Walk0").copy(160,225,360,275).scaledToHeight(250));
    setPos(0,200);
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
