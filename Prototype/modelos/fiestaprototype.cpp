#include "fiestaprototype.h"
#include "QDebug"

FiestaPrototype::FiestaPrototype()
{
    valorDeCompra = 0;
}

FiestaPrototype::FiestaPrototype(FiestaPrototype *fiestaPrototype)
{
    this->valorDeCompra = fiestaPrototype->getValorDeCompra();
}

CarroPrototype* FiestaPrototype::clonar()
{
    return new FiestaPrototype(this);
}

void FiestaPrototype::exibirInfo()
{
    qDebug() << "Modelo: Fiesta\nMontadora: Ford\n" << "Valor: R$ " << getValorDeCompra();
}
