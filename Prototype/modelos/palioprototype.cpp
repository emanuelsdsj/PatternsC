#include "palioprototype.h"
#include "QDebug"

PalioPrototype::PalioPrototype()
{

}

PalioPrototype::PalioPrototype(PalioPrototype *palioPrototype)
{
    this->valorDeCompra = palioPrototype->getValorDeCompra();
}

void PalioPrototype::exibirInfo()
{
    qDebug() << "Modelo: Palio\nMontadora: Fiat\n" << "Valor: R$ " << getValorDeCompra();
}

CarroPrototype* PalioPrototype::clonar()
{
    return new PalioPrototype(this);
}
