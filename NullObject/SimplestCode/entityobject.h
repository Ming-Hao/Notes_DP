#ifndef ENTITYOBJECT_H
#define ENTITYOBJECT_H

#include <QString>
#include "iobject.h"

class EntityObject : public IObject
{
public:
    EntityObject(const QString& name);
    bool IsNull() override;
    void show() override;

};

#endif // ENTITYOBJECT_H
