#include "factory1.h"
#include "iabstractproduct1.h"
#include "iabstractproduct2.h"
#include "product11.h"
#include "product21.h"

Factory1::Factory1()
{

}

IAbstractProduct1 *Factory1::createProduct1()
{
    return new Product11();
}

IAbstractProduct2 *Factory1::createProduct2()
{
    return new Product21();
}
