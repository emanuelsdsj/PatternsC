#include "multiplicacaocommand.h"
#include "calculadora/calculadora.h"

class Calculadora;

MultiplicacaoCommand::MultiplicacaoCommand(double numero, Calculadora *receiver)
{
    this->numero = numero;
    this->receiver = receiver;
}

void MultiplicacaoCommand::redo()
{
    receiver->setNumero(receiver->getNumero()*numero);
}

void MultiplicacaoCommand::undo()
{
    receiver->setNumero(receiver->getNumero()/numero);
}
