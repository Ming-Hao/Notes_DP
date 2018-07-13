#include "characterfactory.h"
#include "weapons.h"
#include "equipment.h"

WeaponEquipmentFactory::WeaponEquipmentFactory()
{

}

IWeapon *MeleeWeaponEquipment::CreateWeapon()
{
    return new MeleeWeapon();
}

IEquipment *MeleeWeaponEquipment::CreateEquipment()
{
    return new HeavyEquipment();
}

IWeapon *RangedWeaponEquipment::CreateWeapon()
{
    return new RangedWeapon();
}

IEquipment *RangedWeaponEquipment::CreateEquipment()
{
    return new LightEquipment();
}
