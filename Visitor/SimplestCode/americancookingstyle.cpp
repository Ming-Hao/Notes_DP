#include "americancookingstyle.h"
#include "meat.h"
#include "soup.h"
#include <QDebug>

AmericanCookingStyle::AmericanCookingStyle() : IVisitor()
{

}

void AmericanCookingStyle::visit(Meat *meatitem)
{
    qDebug() << "american type";
    meatitem->heat(10);
}

void AmericanCookingStyle::visit(Soup *soupitem)
{
    qDebug() << "american type";
    soupitem->Stew();
}
