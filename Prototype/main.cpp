#include <QCoreApplication>
#include "modelos/palioprototype.h"
#include "modelos/fiestaprototype.h"
#include "interfaces/carroprototype.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    PalioPrototype *prototipoPalio = new PalioPrototype();
    FiestaPrototype *prototipoFiesta = new FiestaPrototype();

    CarroPrototype *palioNovo = prototipoPalio->clonar();
    palioNovo->setValorDeCompra(27900.0);
    CarroPrototype *palioUsado = prototipoPalio->clonar();
    palioUsado->setValorDeCompra(21000.0);
    CarroPrototype *fiestaNovo = prototipoFiesta->clonar();
    fiestaNovo->setValorDeCompra(25000.0);
    CarroPrototype *fiestaUsado = prototipoFiesta->clonar();
    fiestaUsado->setValorDeCompra(22000.0);

    palioNovo->exibirInfo();
    palioUsado->exibirInfo();
    fiestaNovo->exibirInfo();
    fiestaUsado->exibirInfo();

    return a.exec();
}
