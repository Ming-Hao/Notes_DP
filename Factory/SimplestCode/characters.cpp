#include "characters.h"
#include "weapons.h"
#include "characterfactory.h"
#include "equipment.h"
#include <QtGlobal>
#include <QDebug>
ICharacter::ICharacter(const QString &name) : name(name)
{
    this->weapon = nullptr;
}

ICharacter::~ICharacter()
{
    if(this->weapon != nullptr)
        delete this->weapon;
}

void ICharacter::fight(Distance dis)
{
    if(this->weapon != nullptr)
        delete this->weapon;
    this->weapon = this->getWeapon(dis);
    this->weapon->attack();
}


IWeapon *WarriorCharacter::getWeapon(Distance dis)
{
    switch (dis) {
    case Distance::closedis:
        qDebug() << "No weapon";
        return new NoWeapon();
        break;
    case Distance::longdis:
        qDebug() << "melee weapon";
        return new MeleeWeapon();
        break;
    default:
        break;
    }
}


IWeapon *MagicCharacter::getWeapon(Distance dis)
{
    switch (dis) {
    case Distance::closedis:
        qDebug() << "melee weapon";
        return new MeleeWeapon();
        break;
    case Distance::longdis:
        qDebug() << "ranged weapon";
        return new RangedWeapon();
        break;
    default:
        break;
    }
}



AvatarCreater::AvatarCreater(WeaponEquipmentFactory *factory)
{
    this->CreateHelper = factory;
}

void AvatarCreater::SetFactory(WeaponEquipmentFactory *factory)
{
    delete this->CreateHelper;
    this->CreateHelper = factory;
}

Avatar *AvatarCreater::Create()
{
    return new Avatar(this->CreateHelper->CreateWeapon(),
                      this->CreateHelper->CreateEquipment());

}

Avatar::Avatar(IWeapon *weapon, IEquipment *equipment)
{
    this->weapon = weapon;
    this->equipment = equipment;
}

Avatar::~Avatar()
{
    delete this->weapon;
    delete this->equipment;
}

void Avatar::display()
{
    this->weapon->attack();
    qDebug() << "Equip weight " << QString::number(this->equipment->Weight());
}


