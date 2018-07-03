#ifndef IDLESTATE_H
#define IDLESTATE_H

#include "iworkstate.h"
class Employee;
class IdleState : public IWorkState
{
public:
    IdleState(Employee* employee);
    void NewWork() override;
    void ReportWork() override;
};

#endif // IDLESTATE_H
