#ifndef ALUNO_H
#define ALUNO_H

#include "interfaces/ielement.h"

class Visitor;

class Aluno : public IElement
{
public:
    Aluno(double altura);
    double getAltura();
    virtual ~Aluno(){}
    virtual void accept(IVisitor *visitor);
private:
    double altura;
};

#endif // ALUNO_H
