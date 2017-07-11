#include <QCoreApplication>
#include "QDebug"
#include "interfaces/iplatform.h"
#include "interfaces/windowabstract.h"
#include "windows/win1.h"
#include "windows/win2.h"
#include "platforms/linux.h"
#include "platforms/osx.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    IPlatform *linu = new Linux();
    IPlatform *osx = new OSX();
    WindowAbstract *win1 = new Win1();
    WindowAbstract *win2 = new Win2();

    win1->setPlatform(osx);
    win1->show();
    win1->setPlatform(linu);
    win1->show();

    win2->setPlatform(osx);
    win2->show();
    win2->setPlatform(linu);
    win2->show();
    return a.exec();
}
