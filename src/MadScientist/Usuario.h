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

    void leer(const QJsonObject &json);
    void escribir(QJsonObject &json) const;
    QString getUsuario() const;

private:
    QString clave;
    QString guestGenerator();
};

#endif // USUARIO_H
