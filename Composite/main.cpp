#include <QCoreApplication>
#include "components/triangle.h"
#include "interfaces/icomponent.h"
#include "interfaces/component.h"
#include "components/rectangle.h"
#include <QDebug>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    IComponent *triangle1 = new Triangle();
    IComponent *triangle2 = new Triangle();
    IComponent *rectangle1 = new Rectangle();
    IComponent *rectangle2 = new Rectangle();
    Component *component = new Component();

    component->addComponent(triangle1);
    component->addComponent(rectangle1);
    component->girar();

    QString str = "dasdas";
    qDebug("\n");
    component->addComponent(triangle2);
    component->addComponent(rectangle2);
    component->girar();

    return a.exec();
}
