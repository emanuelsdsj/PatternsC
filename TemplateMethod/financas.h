#ifndef FINANCAS_H
#define FINANCAS_H

class Subject;

class Financas
{
public:
    Financas();
    void setSubject(Subject *subject);
    void relatorio();
private:
    Subject *subject = 0;
};

#endif // FINANCAS_H
