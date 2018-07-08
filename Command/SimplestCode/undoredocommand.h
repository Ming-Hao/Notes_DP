#ifndef UNDOREDOCOMMAND_H
#define UNDOREDOCOMMAND_H


class UndoRedoCommand
{
public:
    UndoRedoCommand();
    virtual void undo() {}
    virtual void redo() {}
};

class UndoCommand
{
public:
    UndoCommand();
    virtual void undo() {}

};

#endif // UNDOREDOCOMMAND_H
