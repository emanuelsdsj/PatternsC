#include <QCoreApplication>
#include <QList>
#include "interfaces/ielement.h"
#include "professor/professor.h"
#include "aluno/aluno.h"
#include "interfaces/ivisitor.h"
#include "visitors/visitoralturamedia.h"
#include <QDebug>
#include <QString>



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<IElement *> elements;
    IVisitor *visitorAltura = new VisitorAlturaMedia();
    elements.append(new Aluno(1.70));
    elements.append(new Aluno(1.80));
    elements.append(new Professor(1.80));
    elements.append(new Professor(1.70));
    for(int i = 0; i < elements.size(); i++)
        elements.at(i)->accept(visitorAltura);
    qDebug() << dynamic_cast<VisitorAlturaMedia *>(visitorAltura)->getAlturaMedia();


    return a.exec();
}
