#include <iostream>
#include "AngajatUTM.h"
#include "CadreDidactice.h"
#include <string.h>

using namespace std;

double CadreDidactice::spor = 0.1;

CadreDidactice::CadreDidactice() : AngajatUTM() {}

CadreDidactice::CadreDidactice(int cod, char *nume, double salariu) : AngajatUTM(cod, nume, salariu) {}

void CadreDidactice::setSpor(double v)
{
    spor = v;
}

double CadreDidactice::getSpor()
{
    return spor;
}

double CadreDidactice::calculSpor()
{
    return this->salariu + this->salariu * spor;
}
CadreDidactice::~CadreDidactice()
{
}
