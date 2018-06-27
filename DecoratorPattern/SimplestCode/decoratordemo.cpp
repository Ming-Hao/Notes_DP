#include "decoratordemo.h"
#include <QDebug>
#include "Decorator/derivedcomponent.h"
#include "Decorator/extendcomponent.h"
#include "Decorator/decorator.h"
#include "Decorator/concretedecorator.h"
#include "Decorator/adorndecorator.h"

DecoratorDemo::DecoratorDemo()
{

}
DecoratorDemo::ShowDemo()
{
    IComponent* comp_derived = new DerivedComponent;
    IComponent* comp_extend  = new ExtendComponent;
    IComponent* comp3 = new ConcreteDecorator(comp_derived);
    IComponent* comp4 = new AdornDecorator(comp_extend);
    IComponent* comp5 = new Decorator(comp4);
    IComponent* comp6 = new ConcreteDecorator(new AdornDecorator(new DerivedComponent));
    qDebug() << "Concrete(Derived)\n" << comp3->getDescription();
    qDebug() << "AdornDecorator(Extend)\n" << comp4->getDescription();
    qDebug() << "Decorator(AdornDecorator(Extend))\n" << comp5->getDescription();
    qDebug() << "ConcreteDecorator(AdornDecorator(DerivedComponent))\n" << comp6->getDescription();

    delete comp3;
    delete comp5;
    delete comp6;
    
    //註：因 virtual destructo 機制，刪除物件時，刪掉最後一個 new 的物件即可
}
