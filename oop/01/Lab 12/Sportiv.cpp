#include <iostream>
#include <string>
#include "Sportiv.h"

Sportiv::Sportiv()
{
    id = -1;
    nume = new char[4];
    strcpy(nume, "####");
    dePerformanta = false;
    venitAnual = 0;
}

Sportiv::Sportiv(int id, char *nume, bool dePerformanta, double venitAnual)
{
    this->id = id;
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->dePerformanta = dePerformanta;
    this->venitAnual = venitAnual;
}

Sportiv::Sportiv(const Sportiv &sportiv)
{
    this->id = sportiv.id;
    this->nume = new char[strlen(sportiv.nume) + 1];
    strcpy(this->nume, sportiv.nume);
    this->dePerformanta = sportiv.dePerformanta;
    this->venitAnual = sportiv.venitAnual;
}

Sportiv::~Sportiv()
{
    if (this->nume != NULL)
    {
        delete[] this->nume;
    }
}

Sportiv &Sportiv::operator=(const Sportiv &ob)
{
    this->id = ob.id;
    if (this->nume != NULL)
    {
        delete[] this->nume;
    }
    this->nume = new char[strlen(ob.nume) + 1];
    strcpy(this->nume, ob.nume);
    this->dePerformanta = ob.dePerformanta;
    this->venitAnual = ob.venitAnual;
    return *this;
}

istream &operator>>(istream &in, Sportiv &ob)
{
    cout << "Nume: ";
    char buffer[50];
    in.get(buffer, 50);

    if (ob.nume != NULL)
    {
        delete[] ob.nume;
    }
    ob.nume = new char[strlen(buffer) + 1];
    strcpy(ob.nume, buffer);

    cout << "Id: ";
    in >> ob.id;

    cout << "De Performanta: ";
    in >> ob.dePerformanta;

    cout << "Venit Anual: ";
    in >> ob.venitAnual;

    return in;
}

void Sportiv::setId(int id)
{
    this->id = id;
}

int Sportiv::getId()
{
    return id;
}

void Sportiv::setNume(char *nume)
{
    if (this->nume != NULL)
    {
        delete[] nume;
    }
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
}

char *Sportiv::getNume()
{
    return nume;
}

void Sportiv::setDePerformanta(bool dePerformanta)
{
    this->dePerformanta = dePerformanta;
}

bool Sportiv::getDePerformanta()
{
    return dePerformanta;
}