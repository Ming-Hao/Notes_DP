#ifndef COMMANDCONTEXT_H
#define COMMANDCONTEXT_H

class CommandInvoker;
class CommandReceiver;

class CommandContext
{
public:
    CommandContext();
    ~CommandContext();
    void Start();
private:
    CommandReceiver* receiver;
    CommandInvoker* invoker;
};

#endif // COMMANDCONTEXT_H
