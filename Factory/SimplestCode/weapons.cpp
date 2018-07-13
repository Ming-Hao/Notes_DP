#include "weapons.h"
#include <QDebug>


void MeleeWeapon::attack()
{
    qDebug() << "Melee attack";
}

void RangedWeapon::attack()
{
    qDebug() << "Ranged attack";
}

void NoWeapon::attack()
{
    qDebug() << "No weapon do attack";
}

IWeapon::IWeapon()
{

}
