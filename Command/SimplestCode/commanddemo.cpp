#include "commanddemo.h"
#include "commandcontext.h"
CommandDemo::CommandDemo()
{

}

void CommandDemo::ShowDemo()
{
    CommandContext ctxt;
    ctxt.Start();
}
