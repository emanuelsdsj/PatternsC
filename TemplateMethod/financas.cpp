#include "financas.h"
#include "subject.h"

Financas::Financas()
{

}

void Financas::setSubject(Subject *subject)
{
    this->subject = subject;
}

void Financas::relatorio()
{
    subject->gerarRelatorio();
}
