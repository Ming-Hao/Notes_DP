#ifndef IVISITOR_H
#define IVISITOR_H

class Meat;
class Soup;
class IVisitor
{
public:
    IVisitor();
    virtual void visit(Meat* meatitem) = 0;
    virtual void visit(Soup* soupitem) = 0;
};

#endif // IVISITOR_H
