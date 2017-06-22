#include "relatorio1.h"
#include <QDebug>
#include <QString>

Relatorio1::Relatorio1()
{

}

void Relatorio1::gerarCabecalho()
{
    qDebug() << QString("Cabecalho 1");
}

void Relatorio1::gerarRodape()
{
    qDebug() << QString("Rodape 1");
}
