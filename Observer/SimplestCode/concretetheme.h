#ifndef CONCRETETHEME_H
#define CONCRETETHEME_H

#include "isubject.h"
#include <QList>
class ConcreteThemeTypeA : public ISubject
{
public:
    ConcreteThemeTypeA();
    void notify() override;
    void registerObserver(IObserver* observer) override;
    void removeObserver(IObserver* observer) override;
    QString getType() override;
private:
    QList<IObserver*> observers;

};

class ConcreteThemeTypeB : public ISubject
{
public:
    ConcreteThemeTypeB();
    void notify() override;
    void registerObserver(IObserver* observer) override;
    void removeObserver(IObserver* observer) override;
private:
    QList<IObserver*> observers;

};


#endif // CONCRETETHEME_H
