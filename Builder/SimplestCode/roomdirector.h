#ifndef ROOMDIRECTOR_H
#define ROOMDIRECTOR_H

class IRoomBuilder;
class RoomDirector
{
public:
    RoomDirector(IRoomBuilder* srcbuilder);
    ~RoomDirector();
    void Build();
private:
    IRoomBuilder* roombuilder;
};

#endif // ROOMDIRECTOR_H
