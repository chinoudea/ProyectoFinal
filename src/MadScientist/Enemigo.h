#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <QList>
//#include "Personaje.h"



class Enemigo{

public:
    //Constructor
    Enemigo(QString name="");
    void leer(const QJsonObject &json);
    void escribir(QJsonObject &json) const;

    int tipoPersonaje;
    QString tipoArma;
    int direccion;

};

#endif // ENEMIGO_H
