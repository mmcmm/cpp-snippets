#include <iostream.h>;
#include "AngajatUTM.h"
#include <string.h>

AngajatUTM::AngajatUTM()
{
    cod = -1;
    nume = NULL;
    salariu = 1400.00;
}

AngajatUTM::AngajatUTM(int cod, char *nume, double salariu)
{
    this->cod = cod;
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->salariu = salariu;
}

AngajatUTM::~AngajatUTM()
{
    if (nume)
    {
        delete[] nume;
    }
}

void AngajatUTM::setCod(int cod)
{
    this->cod = cod;
}
void AngajatUTM::setNume(char *nume)
{
    if (this->nume)
    {
        delete[] this->nume;
    }
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
}

void AngajatUTM::setSalariu(double salariu)
{
    this->salariu = salariu;
}

int AngajatUTM::getCod()
{
    return cod;
}

char *AngajatUTM::getNume()
{
    return nume;
}

double AngajatUTM::getSalariu()
{
    return salariu;
}
