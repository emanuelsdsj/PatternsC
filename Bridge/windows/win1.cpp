#include "win1.h"
#include "QDebug"

Win1::Win1()
{

}

void Win1::show()
{
    this->platform->drawLine();
    qDebug() << "Win1 Visível";
}
