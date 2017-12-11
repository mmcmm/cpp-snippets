
#include <iostream.h>
#include "string.h"
#include "Aplicatie.h"

Aplicatie::Aplicatie()
{
    denumire = new char[4];
    strcpy(denumire, "####");
    pret = 0.0;
    nrUtilizatori = 0;
    diagonala = 15;
}

Aplicatie::Aplicatie(char *denumire, double pret, int nrUrilizatori, int diagonala)
{
    this->denumire = new char[strlen(denumire) + 1];
    strcpy(this->denumire, denumire);
    this->pret = pret;
    this->nrUtilizatori = nrUtilizatori;
    this->diagonala = diagonala;
}

void Aplicatie::afisare()
{
    cout << denumire << endl
         << pret << endl
         << nrUtilizatori << endl
         << diagonala << endl;
}

void Aplicatie::setDenumire(char *denumire)
{
    if (this->denumire)
    {
        delete[] this->denumire;
    }
    this->denumire = new char[strlen(denumire) + 1];
    strcpy(this->denumire, denumire);
}

void Aplicatie::setPret(double pret)
{
    this->pret = pret;
}

void Aplicatie::setNrUtilizatori(int nrUtilizatori)
{
    this->nrUtilizatori = nrUtilizatori;
}

void Aplicatie::setDiagonala(int diagonala)
{
    this->diagonala = diagonala;
}

char *Aplicatie::getDenumire()
{
    return denumire;
}

double Aplicatie::getPret()
{
    return pret;
}

int Aplicatie::getNrUtilizatori()
{
    return nrUtilizatori;
}

int Aplicatie::getDiagonala()
{
    return diagonala;
}

Aplicatie::~Aplicatie()
{
    if (this->denumire)
    {
        delete[] denumire;
    }
}

Aplicatie::Aplicatie(const Aplicatie &ob)
{
    this->denumire = new char[strlen(ob.denumire) + 1];
    strcpy(this->denumire, ob.denumire);
    this->pret = ob.pret;
    this->nrUtilizatori = ob.nrUtilizatori;
    this->diagonala = ob.diagonala;
}

Aplicatie &Aplicatie::operator=(const Aplicatie &ob)
{
    if (this->denumire)
    {
        delete[] denumire;
    }
    this->denumire = new char[strlen(ob.denumire) + 1];
    strcpy(this->denumire, ob.denumire);
    this->pret = ob.pret;
    this->nrUtilizatori = ob.nrUtilizatori;
    this->diagonala = ob.diagonala;
    return *this;
}