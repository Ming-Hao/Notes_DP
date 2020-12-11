#include "realobject.h"
#include "ibase.h"
#include <QDebug>
RealObject::RealObject() : IBase()
{

}

RealObject::~RealObject()
{
    qDebug() << "RealObj delete";
}

void RealObject::DoSomething()
{
    qDebug() << "Print RealObject";
}
