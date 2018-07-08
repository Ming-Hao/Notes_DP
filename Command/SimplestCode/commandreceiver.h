#ifndef COMMANDRECEIVER_H
#define COMMANDRECEIVER_H

#include <QString>

class CommandReceiver
{
public:
    CommandReceiver(const QString& name);
    void DoWorkA();
    void CancelWorkA();

    void DoWorkB();
    void CancelWorkB();

    void DoWorkC();
    void CancelWorkC();
private:
    QString name;
};

#endif // COMMANDRECEIVER_H
