#ifndef IABSTRACTFACTORY_H
#define IABSTRACTFACTORY_H
#include "iabstractproduct1.h"
#include "iabstractproduct2.h"

class IAbstractFactory
{
public:
    virtual IAbstractProduct1 *createProduct1() = 0;
    virtual IAbstractProduct2 *createProduct2() = 0;
};

#endif // IABSTRACTFACTORY_H
