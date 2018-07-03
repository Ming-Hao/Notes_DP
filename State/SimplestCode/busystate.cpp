#include "busystate.h"
#include "employee.h"
#include <QDebug>
BusyState::BusyState(Employee * employee) : IWorkState(employee)
{

}

void BusyState::NewWork()
{
    qDebug() << "can not handle new work";
}

void BusyState::ReportWork()
{
    this->employee->setState(this->employee->getNormalState());
    this->employee->decreaseTask();
    qDebug() << "current task num is"<< QString::number(this->employee->getCurrentTaskNum());
}
