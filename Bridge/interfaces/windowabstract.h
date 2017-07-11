#ifndef WINDOWABSTRACT_H
#define WINDOWABSTRACT_H
#include "iplatform.h"

class WindowAbstract
{
public:
    virtual void show() = 0;
    void setPlatform(IPlatform *platform);
protected:
    IPlatform *platform;
};

#endif // WINDOWABSTRACT_H
