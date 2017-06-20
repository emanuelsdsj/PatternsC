#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "ielement.h"

class IVisitor;

class Professor : public IElement
{
public:
    Professor(double altura);
    virtual ~Professor(){}
    virtual void accept(IVisitor *visitor);
    double getAltura();
private:
    double altura;
};

#endif // PROFESSOR_H
