#ifndef BUSYSTATE_H
#define BUSYSTATE_H

#include "iworkstate.h"
class Employee;
class BusyState : public IWorkState
{
public:
    BusyState(Employee* employee);
    void NewWork() override;
    void ReportWork() override;
};

#endif // BUSYSTATE_H
