#ifndef FACTORY1_H
#define FACTORY1_H
#include "iabstractfactory.h"
#include "iabstractproduct1.h"
#include "iabstractproduct2.h"

class Factory1 : public IAbstractFactory
{
public:
    Factory1();
    virtual ~Factory1(){}
    virtual IAbstractProduct1 *createProduct1();
    virtual IAbstractProduct2 *createProduct2();
};

#endif // FACTORY1_H
