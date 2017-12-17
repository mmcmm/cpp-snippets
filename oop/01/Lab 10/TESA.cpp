
#include <iostream>
#include "TESA.h"

using namespace std;

double TESA::spor = 0.15;

TESA::TESA() : AngajatUTM() {}
TESA::TESA(int cod, char *nume, double salariu) : AngajatUTM(cod, nume, salariu) {}

TESA::~TESA() {}

double TESA::calculSpor()
{
    return salariu + salariu * spor;
}