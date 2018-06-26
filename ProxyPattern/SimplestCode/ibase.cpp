#include "ibase.h"
#include <QDebug>
IBase::IBase()
{

}

IBase::~IBase()
{
    qDebug() << "IBase delete";
}

