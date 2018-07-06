#ifndef IOBJECT_H
#define IOBJECT_H

#include <QString>
class IObject
{
public:
    IObject();
    virtual ~IObject() {}
    virtual bool IsNull() = 0;
    virtual void show() = 0;
    virtual QString getName() const { return this->name; }
protected:
    QString name;
};

#endif // IOBJECT_H
