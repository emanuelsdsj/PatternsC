#ifndef OSX_H
#define OSX_H
#include "iplatform.h"


class OSX : public IPlatform
{
public:
    OSX();
    virtual ~OSX(){}
    virtual void drawLine();
};

#endif // OSX_H
