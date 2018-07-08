#ifndef COMMANDINVOKER_H
#define COMMANDINVOKER_H

#include <QQueue>
#include <QStack>
class ICommand;

class CommandInvoker
{
public:
    CommandInvoker();
    ~CommandInvoker();

    void addOrder(ICommand* src_order);
    void cancelOrder(ICommand* src_order);
    void DispatchOrders();
    void Undo();
    void ClearOrders();
private:
    QQueue<ICommand*> orders;
    QStack<ICommand*> history_orders;
    QQueue<ICommand*> UsedToDeleteAllOrders;
};

#endif // COMMANDINVOKER_H
