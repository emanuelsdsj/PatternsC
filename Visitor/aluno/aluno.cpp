#include "aluno.h"
#include "interfaces/ivisitor.h"

Aluno::Aluno(double altura)
{
    this->altura = altura;
}

void Aluno::accept(IVisitor *visitor)
{
    visitor->visitAluno(this);
}

double Aluno::getAltura()
{
    return altura;
}
