#include "component.h"

Component::Component()
{

}

void Component::girar()
{
    foreach (IComponent *c, componentes) {
        c->girar();
    }
}

void Component::addComponent(IComponent *component)
{
    componentes.append(component);
}

void Component::removeComponent(IComponent *component)
{
    componentes.removeOne(component);
}
