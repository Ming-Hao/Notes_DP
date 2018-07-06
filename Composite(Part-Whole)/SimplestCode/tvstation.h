#ifndef TVSTATION_H
#define TVSTATION_H

#include <vector>
#include "ielement.h"
class TVStation : public IElement
{
public:
    TVStation();
    ~TVStation();
    void Process() override;

};

#endif // TVSTATION_H
