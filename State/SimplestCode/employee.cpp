#include "employee.h"
#include "busystate.h"
#include "idlestate.h"
#include "normalstate.h"

Employee::Employee(int limit) : maxTask(limit), taskNum(0)
{    
    this->idlestate = new IdleState(this);
    this->normalstate = new NormalState(this);
    this->busystate = new BusyState(this);

    this->currentstate = idlestate;

}

Employee::~Employee()
{
    delete this->idlestate;
    delete this->normalstate;
    delete this->busystate;

}

void Employee::assignTask()
{
    this->currentstate->NewWork();
}

void Employee::returnTask()
{
    this->currentstate->ReportWork();
}

void Employee::setState(IWorkState *state)
{
    this->currentstate = state;
}
