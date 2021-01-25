#ifndef USUARIO_H
#define USUARIO_H

#include <QString>

class Usuario
{
public:
    Usuario();
    Usuario(int int_id, QString str_user);
    int id;
    QString usuario;
private:
    QString clave;
    QString guestGenerator();
};

#endif // USUARIO_H
