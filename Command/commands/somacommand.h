#ifndef SOMACOMMAND_H
#define SOMACOMMAND_H
#include "interfaces/icommand.h"
#include "calculadora/calculadora.h"

class ICommand;
class Calculadora;


class SomaCommand : public ICommand
{
public:
    SomaCommand(double numero, Calculadora *receiver);
    virtual void redo();
    virtual void undo();
private:
    Calculadora *receiver;
    double numero;
};

#endif // SOMACOMMAND_H
