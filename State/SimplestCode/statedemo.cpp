#include "statedemo.h"
#include "employee.h"
#include <QDebug>
StateDemo::StateDemo()
{

}

void StateDemo::ShowDemo()
{
    Employee* salesman = new Employee(5);
    salesman->assignTask();
    salesman->assignTask();
    salesman->returnTask();
    salesman->returnTask();
    salesman->returnTask();
    salesman->assignTask();
    salesman->assignTask();
    salesman->assignTask();
    salesman->returnTask();

    delete salesman;
    qDebug() << "finish demo";
}

