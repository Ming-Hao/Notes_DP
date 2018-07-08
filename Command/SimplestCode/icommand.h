#ifndef ICOMMAND_H
#define ICOMMAND_H

#include "undoredocommand.h"
class ICommand : public UndoCommand
{
public:
    ICommand();
    virtual ~ICommand() {}
    virtual void execute() = 0;
};

#endif // ICOMMAND_H
