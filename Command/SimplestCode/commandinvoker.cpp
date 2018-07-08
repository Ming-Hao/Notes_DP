#include "commandinvoker.h"

#include <QDebug>
#include "icommand.h"

CommandInvoker::CommandInvoker()
{
//    this->orders = new QQueue<ICommand*>();
    //    this->history_orders = new QStack<ICommand*>();
}

CommandInvoker::~CommandInvoker()
{
    this->ClearOrders();
}



void CommandInvoker::addOrder(ICommand *src_order)
{
    this->orders.push_back(src_order);
    this->UsedToDeleteAllOrders.push_back(src_order);
}

void CommandInvoker::cancelOrder(ICommand *src_order)
{
    if(this->orders.contains(src_order))
        this->orders.removeOne(src_order);
}

void CommandInvoker::DispatchOrders()
{
    while(!this->orders.empty())
    {
        ICommand* cmd = this->orders.at(0);
        cmd->execute();
        this->history_orders.push_front(cmd);
        this->orders.pop_front();
    }
}

void CommandInvoker::Undo()
{
    if(!this->history_orders.empty())
    {
        ICommand* cmd = this->history_orders.at(0);
        cmd->undo();
        this->history_orders.pop_front();
    }
    else
    {
        qDebug() << "No command can undo";
    }
}

void CommandInvoker::ClearOrders()
{
    while(!this->UsedToDeleteAllOrders.empty())
    {
        delete this->UsedToDeleteAllOrders.at(0);
        this->UsedToDeleteAllOrders.pop_front();
    }

    while(!this->orders.empty()){
        this->orders.pop_front();
    }

    while(!this->history_orders.empty()){
        this->history_orders.pop_front();
    }
}
