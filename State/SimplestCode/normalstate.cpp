#include "normalstate.h"
#include "employee.h"
#include <QDebug>

NormalState::NormalState(Employee * employee) : IWorkState(employee)
{

}

void NormalState::NewWork()
{
    this->employee->increaseTask();
    qDebug() << "current task num is"<< QString::number(this->employee->getCurrentTaskNum());

    if(this->employee->getCurrentTaskNum() == this->employee->getMaxTask())
    {
        this->employee->setState(this->employee->getBusyState());
        qDebug() << "change to busy state";
    }

}

void NormalState::ReportWork()
{
    this->employee->decreaseTask();
    qDebug() << "current task num is"<< QString::number(this->employee->getCurrentTaskNum());
    if(this->employee->getCurrentTaskNum() == 0)
    {
        this->employee->setState(this->employee->getIdleState());
        qDebug() << "change to idle state";
    }
}
