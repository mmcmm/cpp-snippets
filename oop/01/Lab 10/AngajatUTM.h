#pragma once

class AngajatUTM
{
  protected:
    char *nume;
    int cod;
    double salariu;

  public:
    AngajatUTM();
    AngajatUTM(int cod, char *nume, double salariu);
    virtual ~AngajatUTM();
    void setCod(int cod);
    void setNume(char *nume);
    void setSalariu(double salariu);
    int getCod();
    char *getNume();
    double getSalariu();
    virtual double calculSpor() = 0;
};