/**
 * Project Scientist Escape
 */

#ifndef _PERSONAJE_H
#define _PERSONAJE_H
#include <QGraphicsPixmapItem>
#include <QDebug>
#include <QKeyEvent>


class Personaje:public QObject,  public QGraphicsPixmapItem {

    Q_OBJECT
public: 
    enum TipoPersonaje {
        Cientifico, Cabo, Sargento, Teniente, Coronel
    };
    /*
     * Constructor
     */
    Personaje();
    /*
     * Atributos del objeto
     */
    QString nombre; //Nombre del personaje
    unsigned int nivelVida;  //Nivel de vida del personaje
    unsigned char direccion;  //Direccion en la que se esta moviendo
    unsigned char accionUsuario;  //Direccion en la que se esta moviendo
    double velocidadX; //Velocidad horizontal del personaje
    double velocidad0; //Vo movimiento parabolico
    double aceleracionX; //Aceleración horizontal del personaje
    double velocidadY; //Velocidad veritical del personaje
    double aceleracionY; //Aceleración vertical del personaje
    double anguloSalto; //Aceleración vertical del personaje
    double unidadTiempo, tiempoVuelo;
    QVector <QString> setPics; //Arreglo de imagenes para movimiento
    unsigned int ubicacion; //Ubicacion en el nivel segun desplazamiento.
    double deltaMoveX, deltaMoveY; //Delta de movimiento
    unsigned char indexPic;    
    const QMap<QString,int> movimientos = {{"walk",14},{"hit",14},{"gethit",10}};
    //Arma arma;

    /**
     * @param nombre
     */
    void setNombre(QString nombre);

    /**
     * @param cantidad
     */
    void updateVida(int cantidad);
    void setDireccion(int value);
    /**
     * @param direccion
     */
    void mover();

    void configPics(QString movimiento,QString tipoArma="");

    TipoPersonaje getTipoPersonaje() const;
    void setTipoPersonaje(const TipoPersonaje &value);

private:
    double g = 1000;
    double pi = 2*acos(0.0);
    TipoPersonaje tipoPersonaje;



};

#endif //_PERSONAJE_H
