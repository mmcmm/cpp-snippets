
#include <iostream>
#include "Produs.h"

using namespace std;

Produs::Produs()
{
    denumire = new char[4];
    strcpy(denumire, "###");
    pret = 0.0;
    cantitate = 0;
}

Produs::Produs(char *denumire, double pret, int canitate)
{
    this->denumire = new char[strlen(denumire) + 1];
    strcpy(this->denumire, denumire);
    this->pret = pret;
    this->cantitate = cantitate;
}

Produs::Produs(Produs &ob)
{
    this->denumire = new char[strlen(ob.denumire) + 1];
    this->pret = pret;
    this->cantitate = ob.cantitate;
}

void Produs::afisare()
{
    cout << denumire << " " << pret << " " << cantitate;
}

void Produs::setDenumire(char *denumire)
{
    if (this->denumire)
    {
        delete[] this->denumire;
    }
    this->denumire = new char[strlen(denumire) + 1];
    strcpy(this->denumire, denumire);
}

void Produs::setCantitate(int cantitate)
{
    this->cantitate = cantitate;
}

void Produs::setPret(double pret)
{
    this->pret = pret;
}

Produs::~Produs()
{
    if (denumire)
    {
        delete[] denumire;
    }
}
