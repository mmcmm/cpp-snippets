
#pragma once

class Aplicatie
{
    char *denumire;
    double pret;
    int nrUtilizatori;
    int diagonala;

  public:
    Aplicatie();
    Aplicatie(char *denumire, double pret, int nrUtilizatori, int diagonala);
    void afisare();
    void setDenumire(char *denumire);
    void setPret(double pret);
    void setNrUtilizatori(int nrUtilizatori);
    void setDiagonala(int diagonala);
    char *getDenumire();
    double getPret();
    int getNrUtilizatori();
    int getDiagonala();
    Aplicatie(const Aplicatie &ob);
    ~Aplicatie();
    Aplicatie &operator=(const Aplicatie &ob);
};