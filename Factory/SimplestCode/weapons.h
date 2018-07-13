#ifndef WEAPONS_H
#define WEAPONS_H

enum class Distance{
    longdis,
    closedis
};

class IWeapon
{
public:
    IWeapon();
    virtual ~IWeapon() {}
    virtual void attack() = 0;
};

class MeleeWeapon : public IWeapon
{
public:
    MeleeWeapon() : IWeapon(){}
    virtual ~MeleeWeapon() {}
    virtual void attack();
};


class RangedWeapon : public IWeapon
{
public:
    RangedWeapon() : IWeapon(){}
    virtual ~RangedWeapon() {}
    virtual void attack() ;
};


class NoWeapon : public IWeapon
{
public:
    NoWeapon()  : IWeapon(){}
    virtual ~NoWeapon() {}
    virtual void attack() ;
};


#endif // WEAPONS_H
