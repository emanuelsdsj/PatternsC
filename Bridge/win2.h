#ifndef WIN2_H
#define WIN2_H
#include "windowabstract.h"


class Win2 : public WindowAbstract
{
public:
    Win2();
    virtual ~Win2(){}
    virtual void show();
};

#endif // WIN2_H
