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
    deltaMove = 0;
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
void Cientifico::keyPressEvent(QKeyEvent *event)
{

    switch (event->key()) {
        case 0: //Sin movimiento
            break;
        case Qt::Key_Left: //Movimiento a la izquierda
            accionUsuario = 1;
            /*
            setX(pos().x() - deltaMove);
            if (indexPic<=0) indexPic = (setPics.size()-1);
            //qDebug() << setPics.value(indexPic);
            setPixmap(QPixmap(setPics.value(indexPic)));
            indexPic--;
            */
            break;
        case Qt::Key_Right: //Movimiento a la derecha
            accionUsuario = 2;
            /*
            setX(pos().x() + deltaMove);
            if (indexPic>=setPics.size()) indexPic = 0;
            //qDebug() << setPics.value(indexPic);
            setPixmap(QPixmap(setPics.value(indexPic)));
            indexPic++;
            */
            break;
        case Qt::Key_Up: //Movimiento de salto
            accionUsuario = 3;
            break;
    }
}

void Cientifico::keyReleaseEvent(QKeyEvent *event)
{
    accionUsuario = 0;
}

void Cientifico::configPics(unsigned char numPics) {
    setPics.clear();
    indexPic = 0;
    for (unsigned char i=0; i<numPics; i++) {
        setPics.append(":/scientist/gun0/walk/" + QString::number(i));
    }
}
