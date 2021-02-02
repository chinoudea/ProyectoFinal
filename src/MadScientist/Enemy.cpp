#include "Enemy.h"

Enemy::Enemy()
{
    setNombre("enemy0");
    tipoEnemigo = "enemy0";
    enemyPics.insert("enemy0",14);
    enemyPics.insert("enemy1",14);
    enemyPics.insert("enemy2",14);
    enemyPics.insert("enemy3",14);
    enemyPics.insert("enemy4",14);
    configPics();
    accionUsuario = 1;
}

void Enemy::configPics()
{
    setPics.clear();
    indexPic = 0;
    for(unsigned char i=0;i<enemyPics[tipoEnemigo];i++) {
        setPics.append(":/enemies/"+tipoEnemigo+"/walk/"+QString::number(i));
    }
    setPixmap(QPixmap(":/enemies/"+tipoEnemigo+"/walk/0"));
}
void Enemy::setTipoEnemigo(const QString &value)
{
    tipoEnemigo = value;
}


void Enemy::usarArma() {

}


void Enemy::medirDistancia() {

}
