#ifndef IWORKSTATE_H
#define IWORKSTATE_H

#include <vector>
class QString;
class Employee;
class IWorkState
{
public:
    IWorkState(Employee* employee);
    virtual void NewWork() = 0;
    virtual void ReportWork() = 0;
protected:
    Employee* employee;

};

#endif // IWORKSTATE_H
