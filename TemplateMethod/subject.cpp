#include "subject.h"
#include <QDebug>
#include <QString>

void Subject::gerarRelatorio()
{
    gerarCabecalho();
    qDebug() << QString("Meio do relatório");
    gerarRodape();
}
