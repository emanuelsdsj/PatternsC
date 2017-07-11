#ifndef WIN1_H
#define WIN1_H
#include "windowabstract.h"


class Win1 : public WindowAbstract
{
public:
    Win1();
    virtual ~Win1(){}
    virtual void show();
};

#endif // WIN1_H
