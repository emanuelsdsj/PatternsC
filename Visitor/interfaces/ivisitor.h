#ifndef IVISITOR_H
#define IVISITOR_H
#include "aluno/aluno.h"
#include "professor/professor.h"

class Aluno;
class Professor;

class IVisitor
{
public:
    virtual void visitAluno(Aluno *aluno) = 0;
    virtual void visitProfessor(Professor *professor) = 0;
};

#endif // IVISITOR_H
