#ifndef POSITIVEDEFENSE_H
#define POSITIVEDEFENSE_H

#include "idefensestyle.h"
class PositiveDefense : public IDefenseStyle
{
public:
    PositiveDefense();
    virtual void Defense() override;
    virtual void Lob() override;
    virtual void Clear() override;
};

#endif // POSITIVEDEFENSE_H
