#include "iattackstyle.h"
#include <QDebug>

IAttackStyle::IAttackStyle()
{

}

void IAttackStyle::Smash()
{
    qDebug() << "try smash";
}

void IAttackStyle::Short()
{
    qDebug() << "try short";
}

void IAttackStyle::Drop()
{
    qDebug() << "try drop";
}
