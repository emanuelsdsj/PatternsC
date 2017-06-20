#include "visitoralturamedia.h"
#include "ivisitor.h"
#include "aluno.h"
#include "professor.h"

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
