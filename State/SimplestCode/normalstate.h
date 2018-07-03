#ifndef NORMALSTATE_H
#define NORMALSTATE_H

#include "iworkstate.h"
class Employee;
class NormalState : public IWorkState
{
public:
    NormalState(Employee * employee);
    void NewWork() override;
    void ReportWork();
};

#endif // NORMALSTATE_H
