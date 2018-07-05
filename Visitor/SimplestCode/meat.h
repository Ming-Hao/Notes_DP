#ifndef MEAT_H
#define MEAT_H

#include "imenuitem.h"
class Meat : public IMenuItem
{
public:
    Meat();
    void accept(IVisitor* visitor) override;
    void heat(int time);
};

#endif // MEAT_H
