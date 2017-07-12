#ifndef CARROPROTOTYPE_H
#define CARROPROTOTYPE_H


class CarroPrototype
{
public:
    virtual void exibirInfo() = 0;
    virtual CarroPrototype* clonar() = 0;
    void setValorDeCompra(double valorDeCompra);
    double getValorDeCompra();
protected:
    double valorDeCompra;

};

#endif // CARROPROTOTYPE_H
