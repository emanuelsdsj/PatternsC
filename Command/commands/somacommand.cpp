#include "somacommand.h"
#include "calculadora/calculadora.h"

class Calculadora;

SomaCommand::SomaCommand(double numero, Calculadora *receiver)
{
    this->numero = numero;
    this->receiver = receiver;
}

void SomaCommand::redo()
{
    receiver->setNumero(receiver->getNumero()+numero);
}

void SomaCommand::undo()
{
    receiver->setNumero(receiver->getNumero()-numero);
}
