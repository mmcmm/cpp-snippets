#include "Aplicatie.h"

class Website : public Aplicatie
{
    int nrPagini;
    bool ptMobil;

  public:
    Website();
    Website(char *denumire, double pret, int nrUtilizatori, int diagonala, int nrPagini, bool ptMobil);
    void afisare();
    void setNrPagini(int nrPagini);
    void setPtMobil(bool ptMobil);
    int getNrPagini();
    bool isPtMobil();
    Website(const Website &ob);
    ~Website();
};