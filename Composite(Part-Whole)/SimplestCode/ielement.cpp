#include "ielement.h"
#include <QDebug>
IElement::IElement()
{

}





void IElement::AddItem(IElement *item)
{
    this->SubElements.push_back(item);
}
