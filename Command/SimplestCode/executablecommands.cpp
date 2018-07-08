#include "executablecommands.h"
#include "commandreceiver.h"


CommandsTypeA::CommandsTypeA(CommandReceiver *src_receiver): ICommand()
{
    this->receiver = src_receiver;
}

void CommandsTypeA::execute()
{
    this->receiver->DoWorkA();
}

void CommandsTypeA::undo()
{
    this->receiver->CancelWorkA();
}


CommandsTypeB::CommandsTypeB(CommandReceiver *src_receiver) : ICommand()
{
    this->receiver = src_receiver;
}

void CommandsTypeB::execute()
{
    this->receiver->DoWorkB();
}

void CommandsTypeB::undo()
{
    this->receiver->CancelWorkB();
}

CommandsTypeC::CommandsTypeC(CommandReceiver *src_receiver) : ICommand()
{
    this->receiver = src_receiver;
}

void CommandsTypeC::execute()
{
    this->receiver->DoWorkC();
}

void CommandsTypeC::undo()
{
    this->receiver->CancelWorkC();
}
