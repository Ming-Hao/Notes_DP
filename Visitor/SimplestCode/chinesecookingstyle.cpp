#include "chinesecookingstyle.h"
#include "meat.h"
#include "soup.h"
#include <QDebug>
ChineseCookingStyle::ChineseCookingStyle() : IVisitor()
{

}

void ChineseCookingStyle::visit(Meat *meatitem)
{
    qDebug() << "chinese type";
    meatitem->heat(15);
}

void ChineseCookingStyle::visit(Soup *soupitem)
{
    qDebug() << "chinese type";
    soupitem->Braise();
}
