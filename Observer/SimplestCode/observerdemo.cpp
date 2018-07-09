#include "observerdemo.h"
#include "concreteobject.h"
#include "concretetheme.h"
#include <QDebug>
ObserverDemo::ObserverDemo()
{

}

void ObserverDemo::ShowDemo()
{
    ISubject* themeA = new ConcreteThemeTypeA();
    ISubject* themeB = new ConcreteThemeTypeB();
    IObserver* observer1 = new ConcreteObjectTypeA("observer1");
    IObserver* observer2 = new ConcreteObjectTypeA("observer2");
    IObserver* observer3 = new ConcreteObjectTypeB(92);
    IObserver* observer4 = new ConcreteObjectTypeC(themeA);
    IObserver* observer5 = new ConcreteObjectTypeC(themeA);
    IObserver* observer6 = new ConcreteObjectTypeC(themeB);

    themeA->registerObserver(observer1);
    themeA->registerObserver(observer2);
    themeA->registerObserver(observer3);


    themeB->registerObserver(observer1);
    themeB->registerObserver(observer3);


    themeA->notify();
    themeB->notify();

    themeA->removeObserver(observer1);

    themeA->notify();
    themeB->notify();

}
