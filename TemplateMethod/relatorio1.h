#ifndef RELATORIO1_H
#define RELATORIO1_H
#include "subject.h"


class Relatorio1 : public Subject
{
public:
    Relatorio1();
    virtual void gerarCabecalho();
    virtual void gerarRodape();
};

#endif // RELATORIO1_H
