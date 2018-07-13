#include "factorydemo.h"
#include "staticfactory.h"
#include "characters.h"
#include "characterfactory.h"
#include <QDebug>
FactoryDemo::FactoryDemo()
{

}

void FactoryDemo::ShowDemo()
{
    qDebug() << "---Simple (Static) Factory---";
    Product* productA = ProductFactory::getPruduct(ProductType::ProductTypeA, "cook book");
    Product* productB = ProductFactory::getPruduct(ProductType::ProductTypeB, "sport book");
    Product* productC = ProductFactory::getPruduct(ProductType::ProductTypeC, "lang book");

    qDebug() << productA->printInfo();
    qDebug() << productB->printInfo();
    qDebug() << productC->printInfo();
    delete productA;
    delete productB;
    delete productC;

    qDebug() << "---Factory method---";
    ICharacter* characterA = new MagicCharacter("Wizard");
    characterA->fight(Distance::closedis);
    characterA->fight(Distance::longdis);
    ICharacter* characterB = new WarriorCharacter("Archer");
    characterB->fight(Distance::closedis);
    characterB->fight(Distance::longdis);
    delete characterA;
    delete characterB;
    qDebug() << "---Abstract factory method---";

    AvatarCreater* avatarcreater = new AvatarCreater(new MeleeWeaponEquipment());
    Avatar* avatar1 = avatarcreater->Create();
    avatar1->display();
    avatarcreater->SetFactory(new RangedWeaponEquipment());
    Avatar* avatar2 = avatarcreater->Create();
    avatar2->display();
    delete avatar1;
    delete avatar2;
    delete avatarcreater;

}
