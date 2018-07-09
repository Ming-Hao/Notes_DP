#ifndef CONCRETEOBJECT_H
#define CONCRETEOBJECT_H

#include "iobserver.h"
#include <QString>

class ISubject;
class ConcreteObjectTypeA : public IObserver
{
public:
    ConcreteObjectTypeA(const QString& name);
    void update() override;
private:
    QString name;
};

class ConcreteObjectTypeB : public IObserver
{
public:
    ConcreteObjectTypeB(int size);
    void update() override;
private:
    int size;
    double morecomputing(int num);
};

class ConcreteObjectTypeC : public IObserver
{
public:
    ConcreteObjectTypeC(ISubject* theme);
    void update() override;
private:
    ISubject* theme;
    bool Isresponse();
};

#endif // CONCRETEOBJECT_H
