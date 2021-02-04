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
Cientifico::Cientifico()
{
    setTipoPersonaje(TipoPersonaje::Cientifico);
    setNombre("name"); //Se configura el nombre del cientifico
    configPics("walk","gun0");
    deltaMoveX = 0;
    deltaMoveY = 0;
    //accionUsuario=2;
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

            if (accionUsuario!=3) accionUsuario = 1;
            /*
            setX(pos().x() - deltaMove);
            if (indexPic<=0) indexPic = (setPics.size()-1);
            //qDebug() << setPics.value(indexPic);
            setPixmap(QPixmap(setPics.value(indexPic)));
            indexPic--;
            */
            break;
        case Qt::Key_Right: //Movimiento a la derecha
            if (accionUsuario!=3) accionUsuario = 2;
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
        case Qt::Key_Space: //Disparo
            //Crear proyectil
            Proyectil *bala = new Proyectil("gun1",2);
            bala->setPos(x()+443,y()+395);
            this->scene()->addItem(bala);
            break;
    }
}

void Cientifico::keyReleaseEvent(QKeyEvent *event)
{
    if (accionUsuario!=3) {
        accionUsuario = 0;
    }
}

