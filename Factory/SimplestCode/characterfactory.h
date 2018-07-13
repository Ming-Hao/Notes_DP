#ifndef CHARACTERFACTORY_H
#define CHARACTERFACTORY_H

class ICharacter;
class IEquipment;
class IWeapon;
class WeaponEquipmentFactory
{
public:
    WeaponEquipmentFactory();
    virtual ~WeaponEquipmentFactory() {}
    virtual IWeapon* CreateWeapon() = 0;
    virtual IEquipment* CreateEquipment() = 0;
};

class MeleeWeaponEquipment : public WeaponEquipmentFactory
{
public:
    MeleeWeaponEquipment() : WeaponEquipmentFactory() {}
    virtual ~MeleeWeaponEquipment() {}
    virtual IWeapon* CreateWeapon() ;
    virtual IEquipment* CreateEquipment() ;
};

class RangedWeaponEquipment : public WeaponEquipmentFactory
{
public:
    RangedWeaponEquipment() : WeaponEquipmentFactory() {}
    virtual ~RangedWeaponEquipment() {}
    virtual IWeapon* CreateWeapon() ;
    virtual IEquipment* CreateEquipment() ;
};


#endif // CHARACTERFACTORY_H
