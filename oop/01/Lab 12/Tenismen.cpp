#include <iostream>
#include "Tenismen.h"

Tenismen::Tenismen() : Sportiv()
{
    locATP = -1;
    nrTurnee = 0;
    locuriTurnee = new int[0];
}

Tenismen &Tenismen::operator+=(int t)
{
    int *temp = new int[nrTurnee + 1];
    for (int i = 0; i < nrTurnee; i++)
    {
        temp[i] = locuriTurnee[i];
    }
    temp[nrTurnee] = t;
    locuriTurnee = temp;
    nrTurnee++;
    return *this;
}

int &Tenismen::operator[](int i)
{
    if (i >= nrTurnee)
    {
        cout << "Overflow";
        exit(0);
    }
    return locuriTurnee[i];
}

void Tenismen::setLocATP(int locATP)
{
    this->locATP = locATP;
}

int Tenismen::getLocAtp()
{
    return locATP;
}

void Tenismen::setNrTurnee(int nrTurnee)
{
    this->nrTurnee = nrTurnee;
}

int Tenismen::getNrTurnee()
{
    return nrTurnee;
}