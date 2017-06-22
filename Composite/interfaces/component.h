#ifndef COMPONENT_H
#define COMPONENT_H
#include "icomponent.h"
#include <QList>

class Component : public IComponent
{
public:
    Component();
    virtual void girar();
    void addComponent(IComponent *component);
    void removeComponent(IComponent *component);
private:
    QList<IComponent *> componentes;
};

#endif // COMPONENT_H
