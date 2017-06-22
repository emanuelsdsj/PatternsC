#include <QCoreApplication>
#include "subject.h"
#include "relatorio1.h"
#include "financas.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Subject *subject1 = new Relatorio1();
    Financas *financa = new Financas();
    financa->setSubject(subject1);
    financa->relatorio();

    return a.exec();
}
