#ifndef CHINESECOOKINGSTYLE_H
#define CHINESECOOKINGSTYLE_H

#include "ivisitor.h"

class ChineseCookingStyle : public IVisitor
{
public:
    ChineseCookingStyle();
    void visit(Meat* meatitem);
    void visit(Soup* soupitem);
};

#endif // CHINESECOOKINGSTYLE_H
