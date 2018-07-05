#ifndef AMERICANCOOKINGSTYLE_H
#define AMERICANCOOKINGSTYLE_H

#include "ivisitor.h"
class AmericanCookingStyle : public IVisitor
{
public:
    AmericanCookingStyle();
    void visit(Meat* meatitem);
    void visit(Soup* soupitem);
};

#endif // AMERICANCOOKINGSTYLE_H
