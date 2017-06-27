#ifndef SUBTRACAOCOMMAND_H
#define SUBTRACAOCOMMAND_H
#include "calculadora/calculadora.h"
#include "interfaces/icommand.h"

class ICommand;
class Calculadora;


class SubtracaoCommand : public ICommand
{
public:
    SubtracaoCommand(double numero, Calculadora *receiver);
    virtual void redo();
    virtual void undo();
private:
    Calculadora *receiver;
    double numero;
};

#endif // SUBTRACAOCOMMAND_H
