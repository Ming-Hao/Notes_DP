#include "commandcontext.h"
#include "commandinvoker.h"
#include "commandreceiver.h"
#include "executablecommands.h"
#include <QDebug>
CommandContext::CommandContext()
{
    this->receiver = new CommandReceiver("RECEIVER");
    this->invoker = new CommandInvoker();
}

CommandContext::~CommandContext()
{
    delete this->receiver;
    delete this->invoker;
}

void CommandContext::Start()
{
    ICommand* order1 = new CommandsTypeA(this->receiver);
    ICommand* order2 = new CommandsTypeA(this->receiver);
    ICommand* order3 = new CommandsTypeB(this->receiver);
    ICommand* order4 = new CommandsTypeC(this->receiver);
    this->invoker->addOrder(order1);
    this->invoker->addOrder(order2);
    this->invoker->addOrder(order3);
    this->invoker->addOrder(order4);
    this->invoker->cancelOrder(order3);
    qDebug() << "----invoker dispatch orders----";
    this->invoker->DispatchOrders();
    this->invoker->cancelOrder(order3);
    qDebug() << "----invoker undo----";
    this->invoker->Undo();
    this->invoker->Undo();
    this->invoker->Undo();
    this->invoker->Undo();
    this->invoker->Undo();

    this->invoker->ClearOrders();

    this->invoker->addOrder(new CommandsTypeC(this->receiver));
    this->invoker->addOrder(new CommandsTypeC(this->receiver));
    this->invoker->addOrder(new CommandsTypeA(this->receiver));
}
