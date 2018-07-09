#ifndef ISUBJECT_H
#define ISUBJECT_H
#include <QString>
class IObserver;
class ISubject
{
public:
    ISubject();
    virtual ~ISubject() {}
    virtual void notify() = 0;
    virtual void registerObserver(IObserver* observer) = 0;
    virtual void removeObserver(IObserver* observer) = 0;
    virtual QString getType() { return ""; }
};

#endif // ISUBJECT_H
