#ifndef IMENUITEM_H
#define IMENUITEM_H

class IVisitor;
class IMenuItem
{
public:
    IMenuItem();
    virtual void accept(IVisitor* visitor) = 0;
};

#endif // IMENUITEM_H
