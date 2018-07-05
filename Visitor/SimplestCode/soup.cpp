#include "soup.h"
#include "ivisitor.h"
#include <QDebug>
Soup::Soup() : IMenuItem()
{

}

void Soup::accept(IVisitor *visitor)
{
    visitor->visit(this);
}

void Soup::Stew()
{
    qDebug() << "Stew soup";
}

void Soup::Braise()
{
    qDebug() << "Braise soup";
}
