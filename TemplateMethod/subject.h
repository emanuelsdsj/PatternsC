#ifndef SUBJECT_H
#define SUBJECT_H

class Subject
{
protected:
    virtual void gerarCabecalho() = 0;
    virtual void gerarRodape() = 0;
public:
    void gerarRelatorio();
};

#endif // SUBJECT_H
