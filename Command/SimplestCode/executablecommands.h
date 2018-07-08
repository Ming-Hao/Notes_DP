#ifndef EXECUTABLECOMMANDS_H
#define EXECUTABLECOMMANDS_H

#include "icommand.h"
class CommandReceiver;
class CommandsTypeA : public ICommand
{
public:
    CommandsTypeA(CommandReceiver* src_receiver);
    void execute() override;
    void undo() override;
private:
    CommandReceiver* receiver;
};

class CommandsTypeB : public ICommand
{
public:
    CommandsTypeB(CommandReceiver *src_receiver);
    void execute() override;
    void undo() override;
private:
    CommandReceiver* receiver;
};

class CommandsTypeC : public ICommand
{
public:
    CommandsTypeC(CommandReceiver *src_receiver);
    void execute() override;
    void undo() override;
private:
    CommandReceiver* receiver;
};

#endif // EXECUTABLECOMMANDS_H
