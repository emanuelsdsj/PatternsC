#ifndef LINUX_H
#define LINUX_H
#include "iplatform.h"

class Linux : public IPlatform
{
public:
    Linux();
    virtual ~Linux(){}
    virtual void drawLine();
};

#endif // LINUX_H
