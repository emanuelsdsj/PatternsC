#ifndef PRODUCT21_H
#define PRODUCT21_H
#include "iabstractproduct2.h"
class QString;

class Product21 : public IAbstractProduct2
{
public:
    Product21();
    virtual ~Product21(){}
    virtual QString sayHi();
};

#endif // PRODUCT21_H
