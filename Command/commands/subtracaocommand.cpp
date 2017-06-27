#include "subtracaocommand.h"
#include "calculadora/calculadora.h"

class Calculadora;

SubtracaoCommand::SubtracaoCommand(double numero, Calculadora *receiver)
{
    this->numero = numero;
    this->receiver = receiver;
}

void SubtracaoCommand::redo()
{
    receiver->setNumero(receiver->getNumero()-numero);
}

void SubtracaoCommand::undo()
{
    receiver->setNumero(receiver->getNumero()+numero);
}
