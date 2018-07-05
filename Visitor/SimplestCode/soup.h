#ifndef SOUP_H
#define SOUP_H

#include "imenuitem.h"
class Soup : public IMenuItem
{
public:
    Soup();
    void accept(IVisitor* visitor) override;
    void Stew();
    void Braise();
};

#endif // SOUP_H
