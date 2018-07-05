#include "meat.h"
#include "ivisitor.h"
#include <QDebug>
Meat::Meat() : IMenuItem()
{

}

void Meat::accept(IVisitor *visitor)
{
    visitor->visit(this);
}

void Meat::heat(int time)
{
    qDebug() << "heat time" << QString::number(time);
}
