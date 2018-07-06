#ifndef IELEMENT_H
#define IELEMENT_H

#include <vector>
class IElement
{
public:
    IElement();
    virtual ~IElement(){}
    virtual void AddItem(IElement* item);
    virtual void Process() = 0;

protected:
    std::vector<IElement*> SubElements;
};

#endif // IELEMENT_H
