#ifndef MULTIPLICACAOCOMMAND_H
#define MULTIPLICACAOCOMMAND_H
#include "interfaces/icommand.h"
#include "calculadora/calculadora.h"

class Calculadora;
class ICommand;

class MultiplicacaoCommand : public ICommand
{
public:
    MultiplicacaoCommand(double numero, Calculadora *receiver);
    virtual void redo();
    virtual void undo();
private:
    Calculadora *receiver;
    double numero;

};

#endif // MULTIPLICACAOCOMMAND_H
