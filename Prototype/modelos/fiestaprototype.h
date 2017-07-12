#ifndef FIESTAPROTOTYPE_H
#define FIESTAPROTOTYPE_H
#include "interfaces/carroprototype.h"


class FiestaPrototype : public CarroPrototype
{
public:
    FiestaPrototype();
    virtual void exibirInfo();
    virtual CarroPrototype* clonar();
protected:
    FiestaPrototype(FiestaPrototype *fiestaPrototype);
};

#endif // FIESTAPROTOTYPE_H
