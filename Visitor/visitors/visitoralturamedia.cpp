#include "visitoralturamedia.h"
#include "interfaces/ivisitor.h"
#include "aluno/aluno.h"
#include "professor/professor.h"

VisitorAlturaMedia::VisitorAlturaMedia()
{
    numPessoasVisitadas = 0;
    alturaTotal = 0;
}

double VisitorAlturaMedia::getAlturaMedia()
{
    return alturaTotal/numPessoasVisitadas;
}

void VisitorAlturaMedia::visitAluno(Aluno *aluno)
{
    alturaTotal += aluno->getAltura();
    numPessoasVisitadas++;
}

void VisitorAlturaMedia::visitProfessor(Professor *professor)
{
    alturaTotal += professor->getAltura();
    numPessoasVisitadas++;
}
