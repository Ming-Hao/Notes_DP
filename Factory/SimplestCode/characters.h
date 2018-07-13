#ifndef CHARACTERS_H
#define CHARACTERS_H

#include <QString>
#include "weapons.h"


class WeaponEquipmentFactory;
class IEquipment;
class ICharacter
{
public:
    ICharacter(const QString& name);
    virtual ~ICharacter();
    virtual QString getName() const {return this->name; }
    virtual void fight(Distance dis) final;
protected:
    virtual IWeapon* getWeapon(Distance dis) = 0;
    IWeapon* weapon;
    QString name;
};

class MagicCharacter : public ICharacter
{
public:
    MagicCharacter(const QString& name) : ICharacter(name) {}
    virtual IWeapon* getWeapon(Distance dis);
};

class WarriorCharacter : public ICharacter
{
public:
    WarriorCharacter(const QString& name) : ICharacter(name) {}
    virtual IWeapon* getWeapon(Distance dis);

};

class Avatar
{
public:
    Avatar(IWeapon* weapon, IEquipment* equipment);
    virtual ~Avatar();
    virtual void display();
private:
    IWeapon* weapon;
    IEquipment* equipment;
};

class AvatarCreater
{
public:
    AvatarCreater(WeaponEquipmentFactory* factory);
    void SetFactory(WeaponEquipmentFactory* factory);
    ~AvatarCreater() {delete this->CreateHelper;}
    Avatar* Create();
private:
    WeaponEquipmentFactory* CreateHelper;
    IWeapon* weapon;
    IEquipment* equipment;
};



#endif // CHARACTERS_H
