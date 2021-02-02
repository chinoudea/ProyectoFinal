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
    armasPics.insert("gun0",14);
    armasPics.insert("gun1",14);
    armasPics.insert("gun2",14);
    armasPics.insert("gun3",14);
    armasPics.insert("gun4",14);
    armasPics.insert("gun5",14);
    armasPics.insert("gun6",14);
    //setPixmap(QPixmap(":/scientist/gun0/walk/0"));
    //setPixmap(QPixmap(":/scientist/Gun0_Walk0"));
    //setPixmap(QPixmap(":/scientist/Gun0_Walk0").copy(160,225,360,275).scaledToHeight(250));    
    //setScale(0.7);
    configPics("gun1");
    deltaMoveX = 0;
    deltaMoveY = 0;
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

void Cientifico::configPics(QString tipoArma) {
    setPics.clear();
    indexPic = 0;    
    for (unsigned char i=0; i<armasPics[tipoArma]; i++) {
        setPics.append(":/scientist/"+tipoArma+"/walk/" + QString::number(i));
    }
    setPixmap(QPixmap(":/scientist/"+tipoArma+"/walk/0"));
}
