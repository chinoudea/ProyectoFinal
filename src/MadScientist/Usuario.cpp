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

QString Usuario::getUsuario() const
{
    return usuario;
}

void Usuario::leer(const QJsonObject &json)
{
    id = json["id"].toInt();
    usuario = json["user"].toString();
}

void Usuario::escribir(QJsonObject &json) const
{
    json["id"] = id;
    json["user"] = usuario;
}


QString Usuario::guestGenerator()
{
    return "GUEST_"+QString::number(rand()%100 +1);
}
