#ifndef CALCULADORA_H
#define CALCULADORA_H


class Calculadora
{
public:
    Calculadora(double numero);
    void setNumero(double numero);
    double getNumero();
private:
    double numero;
};

#endif // CALCULADORA_H
