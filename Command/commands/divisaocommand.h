#ifndef DIVISAOCOMMAND_H
#define DIVISAOCOMMAND_H
#include "interfaces/icommand.h"
#include "calculadora/calculadora.h"

class Calculadora;
class ICommand;

class DivisaoCommand : public ICommand
{
public:
    DivisaoCommand(double numero, Calculadora *receiver);
    virtual void redo();
    virtual void undo();
private:
    Calculadora *receiver;
    double numero;
};

#endif // DIVISAOCOMMAND_H
