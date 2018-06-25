#include "proxyobject.h"
#include "realobject.h"
#include <QDebug>
ProxyObject::ProxyObject() : IBase()
{
    this->realobj = new RealObject;
}

ProxyObject::~ProxyObject()
{
    delete this->realobj;
    qDebug() << "Proxy delete";
}

void ProxyObject::DoSomething()
{
    this->PreOperation();
    this->realobj->DoSomething();
    this->PostOperation();
}

void ProxyObject::PreOperation()
{
    qDebug() << "Pre Operation";
}

void ProxyObject::PostOperation()
{
    qDebug() << "Post Operation";
}
