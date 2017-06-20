#ifndef VISITORALTURAMEDIA_H
#define VISITORALTURAMEDIA_H
#include "interfaces/ivisitor.h"
#include "professor/professor.h"
#include "aluno/aluno.h"

class Aluno;
class Professor;


class VisitorAlturaMedia : public IVisitor
{
public:
    VisitorAlturaMedia();
    virtual ~VisitorAlturaMedia(){}
    double getAlturaMedia();
    virtual void visitAluno(Aluno *aluno);
    virtual void visitProfessor(Professor *professor);
private:
    double alturaTotal;
    int numPessoasVisitadas;
};

#endif // VISITORALTURAMEDIA_H
