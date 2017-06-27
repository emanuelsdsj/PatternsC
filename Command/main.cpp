#include <QCoreApplication>
#include "interfaces/icommand.h"
#include "calculadora/calculadora.h"
#include "commands/divisaocommand.h"
#include "commands/somacommand.h"
#include "commands/subtracaocommand.h"
#include "commands/multiplicacaocommand.h"
#include <QString>
#include <QDebug>
#include <QList>
#include <QTextStream>
QTextStream cout(stdout);
QTextStream cin(stdin);

//QString s2;
//cout << "Enter a sentence: ";
//cout.flush();
//s2 = cin.readLine();
//cout << "Here is your sentence:" << s2 << endl;
//cout << "The length of your sentence is: " << s2.length() << endl;

QList<ICommand *> removerLista(int pos, QList<ICommand *> commands) {
    QList<ICommand *> commands2;
    for(int i =0; i < pos; i++)
        commands2.append(commands.at(i));

    return commands2;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString menu = "";
    Calculadora *calculadora = new Calculadora(0);
    QList<ICommand *> commands;
    double numAtual = 0;
    int pos = 0;

    do {
        cout << "1 - Somar \n";
        cout << "2 - Multiplicar \n";
        cout << "3 - Dividir \n";
        cout << "4 - Subtração \n";
        cout << "5 - Undo \n";
        cout << "6 - Redo \n";
        cout.flush();
        menu = cin.readLine();
        switch(menu.toInt()) {
            case 1: {
                if(commands.size() != pos) {
                   commands = removerLista(pos, commands);
                   pos = commands.size();
                }
                cout << "Insira o número:  \n";
                cout.flush();
                QString num = cin.readLine();
                commands.append(new SomaCommand(num.toDouble(), calculadora));
                commands.at(commands.size() - 1)->redo();
                cout << "Resultado: " << calculadora->getNumero() << "\n";
                cout.flush();
                numAtual = calculadora->getNumero();
                pos = commands.size();
                break;
            }
            case 2: {
                if(commands.size() != pos) {
                   commands = removerLista(pos, commands);
                   pos = commands.size();
                }
                cout << "Insira o número:  \n";
                cout.flush();
                QString num = cin.readLine();
                commands.append(new MultiplicacaoCommand(num.toDouble(), calculadora));
                commands.at(commands.size() - 1)->redo();
                cout << "Resultado: " << calculadora->getNumero() << "\n";
                cout.flush();
                numAtual = calculadora->getNumero();
                pos = commands.size();
                break;
            }
            case 3: {
                if(commands.size() != pos) {
                   commands = removerLista(pos, commands);
                   pos = commands.size();
                }
                cout << "Insira o número:  \n";
                cout.flush();
                QString num = cin.readLine();
                commands.append(new DivisaoCommand(num.toDouble(), calculadora));
                commands.at(commands.size() - 1)->redo();
                cout << "Resultado: " << calculadora->getNumero() << "\n";
                cout.flush();
                numAtual = calculadora->getNumero();
                pos = commands.size();
                break;
            }
            case 4: {
                if(commands.size() != pos) {
                   commands = removerLista(pos, commands);
                   pos = commands.size();
                }
                cout << "Insira o número:  \n";
                cout.flush();
                QString num = cin.readLine();
                commands.append(new SubtracaoCommand(num.toDouble(), calculadora));
                commands.at(commands.size() - 1)->redo();
                cout << "Resultado: " << calculadora->getNumero() << "\n";
                cout.flush();
                numAtual = calculadora->getNumero();
                pos = commands.size();
                break;
            }
            case 5: {
                if(commands.size() != 0 && pos != 0) {
                    cout <<  "Número anterior:  \n";
                    cout.flush();
                    commands.at(pos - 1)->undo();
                    pos--;
                    cout << "Resultado: " << calculadora->getNumero() << "\n";
                    cout.flush();
                }
                else {
                    cout << "Resultado: " << calculadora->getNumero() << "\n";
                    cout.flush();
                }
                break;
            }
            case 6: {
                if(commands.size() != 0 && pos != commands.size()) {
                    cout << "Número posterior:  \n";
                    cout.flush();
                    pos++;
                    commands.at(pos - 1)->redo();
                    cout << "Resultado: " << calculadora->getNumero() << "\n";
                    cout.flush();
                }
                else {
                    cout << "Resultado: " << calculadora->getNumero() << "\n";
                    cout.flush();
                }
                break;
            }
            default:{
                cout << "opção não existe \n";
                cout.flush();
            }
        }

    } while(menu != "0");

    return a.exec();
}
