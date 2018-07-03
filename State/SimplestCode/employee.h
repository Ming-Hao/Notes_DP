#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class IWorkState;

class Employee
{
public:
    Employee(int limit); // at least 3
    ~Employee();
    void assignTask();
    void returnTask();
    void setState(IWorkState* state);
    void increaseTask() { this->taskNum += 1;}
    void decreaseTask() { this->taskNum -= 1;}

    IWorkState* getBusyState() { return this->busystate; }
    IWorkState* getIdleState() { return this->idlestate; }
    IWorkState* getNormalState() { return this->normalstate; }
    IWorkState* getCurrentState() { return this->currentstate; }
    int getMaxTask() { return this->maxTask; }
    int getCurrentTaskNum() { return this->taskNum; }

    IWorkState* currentstate;
    IWorkState* busystate;
    IWorkState* idlestate;
    IWorkState* normalstate;
    int maxTask;
    int taskNum;
};

#endif // EMPLOYEE_H
