#include "aluno.h"
#include "ivisitor.h"

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
