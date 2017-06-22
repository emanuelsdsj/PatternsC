#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "interfaces/icomponent.h"


class Triangle : public IComponent
{
public:
    Triangle();
    virtual void girar();
};

#endif // TRIANGLE_H
