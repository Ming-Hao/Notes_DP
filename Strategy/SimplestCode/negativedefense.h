#ifndef NEGATIVEDEFENSE_H
#define NEGATIVEDEFENSE_H

#include "idefensestyle.h"
class NegativeDefense : public IDefenseStyle
{
public:
    NegativeDefense();
    virtual void Defense() override;
};

#endif // NEGATIVEDEFENSE_H
