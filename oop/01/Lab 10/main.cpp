#include <iostream.h>
#include "AngajatUTM.h"
#include "TESA.h"
#include "CadreDidactice.h"
#include <fstream>

using namespace std;

int main()
{
    ifstream f("Angajati.txt");
    int cod;
    char nume[50];
    double salariu;
    AngajatUTM *pob;
    ofstream g("Spor.txt");

    while (f >> cod >> nume >> salariu)
    {
        if (cod / 100 == 1)
        {
            pob = new CadreDidactice(cod, nume, salariu);
        }
        else
        {
            pob = new TESA(cod, nume, salariu);
        }
        g << pob->getNume() << ", " << pob->calculSpor() << endl;
    }
    return 0;
}