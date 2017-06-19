#include <QCoreApplication>
#include "iabstractfactory.h"
#include "iabstractproduct1.h"
#include "iabstractproduct2.h"
#include "factory1.h"
#include "product11.h"
#include "product21.h"
#include <QDebug>



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    IAbstractFactory *factory = new Factory1;
    IAbstractProduct1 *produto1 = factory->createProduct1();
    IAbstractProduct2 *produto2 = factory->createProduct2();
    QString str = produto1->sayHello();
    QString str2 = produto2->sayHi();
    qDebug() << str;
    qDebug() << str2;

    return a.exec();
}

