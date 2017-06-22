#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "interfaces/icomponent.h"


class Rectangle : public IComponent
{
public:
    Rectangle();
    virtual void girar();
};

#endif // RECTANGLE_H
