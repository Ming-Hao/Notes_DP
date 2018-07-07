#ifndef IATTACKSTYLE_H
#define IATTACKSTYLE_H


class IAttackStyle
{
public:
    IAttackStyle();
    virtual ~IAttackStyle() {}
    virtual void Attack() = 0;
    virtual void Smash() ;
    virtual void Short() ;
    virtual void Drop() ;

};

#endif // IATTACKSTYLE_H
