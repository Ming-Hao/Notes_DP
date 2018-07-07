#ifndef IDEFENSESTYLE_H
#define IDEFENSESTYLE_H


class IDefenseStyle
{
public:
    IDefenseStyle();
    virtual ~IDefenseStyle() {}
    virtual void Defense() = 0;
    virtual void Clear() ;
    virtual void Lob() ;
};

#endif // IDEFENSESTYLE_H
