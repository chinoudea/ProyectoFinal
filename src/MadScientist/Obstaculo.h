/**
 * Project Mad Scientist Scape
 */


#ifndef _OBSTACULO_H
#define _OBSTACULO_H

class Obstaculo {
public: 
    //QPixmap[] setPics;
    int velocidad;
    int longitud;
    float angulo;
    int centerX;
    int centerY;
    
void mover();
    
void colisionar();
};

#endif //_OBSTACULO_H
