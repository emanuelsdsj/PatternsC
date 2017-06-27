#include "divisaocommand.h"
#include "calculadora/calculadora.h"

class Calculadora;

DivisaoCommand::DivisaoCommand(double numero, Calculadora *receiver)
{
    this->numero = numero;
    this->receiver = receiver;
}

void DivisaoCommand::redo()
{
    receiver->setNumero(receiver->getNumero()/numero);
}

void DivisaoCommand::undo()
{
    receiver->setNumero(receiver->getNumero()*numero);
}
