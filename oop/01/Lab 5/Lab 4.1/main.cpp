
#include <iostream>
#include "Automobil.h"
#include <fstream>

using namespace std;

int main()
{
    Automobil *autos = new Automobil[25];
    ifstream f("Automobil.txt");
    char linie[500];

    int i = 0;
    while (f.getline(linie, 500) != NULL)
    {
        char *p = strtok(linie, " ");
        autos[i].setMarca(p);
        p = strtok(NULL, " ");
        autos[i].setCapacitate(atoi(p));
        p = strtok(NULL, " ");
        autos[i].setPret(atof(p));
        i++;
    }

    for (int i = 0; i < 25; i++)
    {
        autos[i].afisare();
    }

    cout << "Nr. Auto: " << Automobil::nrAutomobil() << endl;

    delete[] autos;

    return 0;
}
