#include "calculadora.h"

Calculadora::Calculadora(double numero)
{
    this->numero = numero;
}

double Calculadora::getNumero()
{
    return numero;
}

void Calculadora::setNumero(double numero)
{
    this->numero = numero;
}
