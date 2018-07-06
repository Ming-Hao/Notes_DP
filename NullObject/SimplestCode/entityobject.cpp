#include "entityobject.h"
#include <QDebug>
EntityObject::EntityObject(const QString &name) : IObject()
{
    this->name = name;
}

bool EntityObject::IsNull()
{
    return false;
}

void EntityObject::show()
{
    qDebug() << "Name" << this->name;
}
