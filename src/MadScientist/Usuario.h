#ifndef USUARIO_H
#define USUARIO_H

#include <QString>

class Usuario
{
public:
    Usuario();
    int id;
    QString usuario;
private:
    QString clave;
};

#endif // USUARIO_H
