#include <iostream>
#include "Stiva.h"

using namespace std;

Stiva::Stiva(int dim)
{
    this->dim = dim;
    crt = 0;
    v = new int[dim];
}

void Stiva::push(int x)
{
    if (crt < dim)
    {
        v[crt++] = x;
    }
}

int Stiva::pop()
{
    if (crt)
    {
        return v[--crt];
    }
    else
    {
        return -1;
    }
}

void Stiva::afisare()
{
    for (int i = 0; i < crt; i++)
    {
        cout << v[i] << endl;
    }
}

Stiva::Stiva(Stiva &ob)
{
    this->dim = ob.dim;
    this->crt = ob.crt;
    this->v = new int[dim];

    for (int i = 0; i < crt; i++)
    {
        this->v[i] = ob.v[i];
    }
}
˝