#pragma once
#include "AngajatUTM.h"

class CadreDidactice : public AngajatUTM
{
    static double spor;

  public:
    CadreDidactice();
    CadreDidactice(int cod, char *nume, double salariu);
    ~CadreDidactice();
    double calculSpor();
    static double getSpor();
    static void setSpor(double v);
};