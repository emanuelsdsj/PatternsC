#ifndef PALIOPROTOTYPE_H
#define PALIOPROTOTYPE_H
#include "interfaces/carroprototype.h"


class PalioPrototype : public CarroPrototype
{
public:
    PalioPrototype();
    virtual void exibirInfo();
    virtual CarroPrototype* clonar();
protected:
    PalioPrototype(PalioPrototype *palioPrototype);
};

#endif // PALIOPROTOTYPE_H
