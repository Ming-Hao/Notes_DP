#include "idlestate.h"
#include "employee.h"
#include <QDebug>
IdleState::IdleState(Employee * employee) : IWorkState(employee)
{

}

void IdleState::NewWork()
{
    this->employee->setState(this->employee->getNormalState());
    this->employee->increaseTask();
    qDebug() << "current task num is"<< QString::number(this->employee->getCurrentTaskNum());
}

void IdleState::ReportWork()
{
    qDebug() << "have no task to report";
}
