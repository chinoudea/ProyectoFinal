/**
 * Project Mad Scientist Scape
 */


#ifndef _NIVEL_H
#define _NIVEL_H

#include <QJsonObject>
#include <QList>
#include <QString>
#include "Enemigo.h"

class Nivel {
public: 
    Nivel();
    // Getter and Setter Ancho
    int getAnchoNivel() const;
    void setAnchoNivel(int value);
    // Getter Alto
    int getAltoNivel() const;
    // Getter and Setter Lista Enemigos
    QList<Enemigo> getListaEnemigos() const;
    void setListaEnemigos(const QList<Enemigo> &value);
    // Read level configuration from JSON
    void leer(const QJsonObject &json);
    // Write level configuration to JSON
    void escribir(QJsonObject &json) const;
private:
    QString fondo; //Path de la imagen de fondo
    int anchoNivel; //Dimension de ancho de la escena
    const int altoNivel = 600; //Dimension de alto de la escena
    QList<Enemigo> listaEnemigos;

};

#endif //_NIVEL_H
