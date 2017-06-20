#include "professor.h"
#include "interfaces/ivisitor.h"

Professor::Professor(double altura)
{
    this->altura = altura;
}

void Professor::accept(IVisitor *visitor)
{
    visitor->visitProfessor(this);
}

double Professor::getAltura()
{
    return altura;
}
