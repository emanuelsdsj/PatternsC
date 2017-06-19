#ifndef PRODUCT11_H
#define PRODUCT11_H
#include "iabstractproduct1.h"
class QString;

class Product11 : public IAbstractProduct1
{
public:
    Product11();
    virtual ~Product11(){}
    virtual QString sayHello();
};

#endif // PRODUCT11_H
