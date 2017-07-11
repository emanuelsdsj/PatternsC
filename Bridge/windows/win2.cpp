#include "win2.h"
#include "QDebug"

Win2::Win2()
{

}

void Win2::show()
{
    this->platform->drawLine();
    qDebug() << "Win2 Visível";
}
