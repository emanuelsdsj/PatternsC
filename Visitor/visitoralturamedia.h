#ifndef VISITORALTURAMEDIA_H
#define VISITORALTURAMEDIA_H
#include "ivisitor.h"
#include "professor.h"
#include "aluno.h"

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
