#ifndef USUARIO_H
#define USUARIO_H

#include <QJsonObject>
#include <QString>


class Usuario
{
public:
    Usuario();
    Usuario(int int_id, QString str_user);
    int id;
    QString usuario;

    void read(const QJsonObject &json);
    void write(QJsonObject &json) const;
private:
    QString clave;
    QString guestGenerator();
};

#endif // USUARIO_H
