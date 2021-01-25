#include "Usuario.h"

Usuario::Usuario()
{
    id=0;
    usuario = guestGenerator();
}
Usuario::Usuario(int int_id, QString str_user)
{
    id=int_id;
    usuario=str_user;
}

QString Usuario::guestGenerator()
{
    return "GUEST_"+QString::number(rand()%100 +1);
}
