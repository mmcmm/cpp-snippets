
#include <iostream>
#include "Automobil.h"

using namespace std;

Automobil::Automobil()
{
    marca = new char[4];
    strcpy(marca, "####");
    capacitate = 0;
    pret = 0.0;
    nrAuto++;
}

Automobil::Automobil(char *marca, int capacitate, double pret)
{
    this->marca = new char[strlen(marca) + 1];
    strcpy(this->marca, "####");
    this->capacitate = capacitate;
    this->pret = pret;
}

Automobil::Automobil(const Automobil &ob)
{
    this->marca = new char[strlen(ob.marca) + 1];
    strcpy(this->marca, "####");
    this->capacitate = ob.capacitate;
    this->pret = ob.pret;
}

Automobil::~Automobil()
{
    if (marca)
    {
        delete[] marca;
    }
}

void Automobil::afisare()
{
    cout << marca << " " << capacitate << " " << pret << endl;
}

void Automobil::setMarca(char *v)
{
    if (marca)
    {
        delete[] marca;
    }
    marca = new char[strlen(v) + 1];
    strcpy(marca, v);
}

void Automobil::setCapacitate(int v)
{
    capacitate = v;
}

void Automobil::setPret(double v)
{
    pret = v;
}

char *Automobil::getMarca()
{
    return marca;
}

int Automobil::getCapacitate()
{
    return capacitate;
}

double Automobil::getPret()
{
    return pret;
}

int Automobil::nrAutomobil()
{
    return nrAuto;
}

int Automobil::nrAuto = 0;
