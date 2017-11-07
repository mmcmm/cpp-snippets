class Produs
{
    char *denumire;
    double pret;
    int cantitate;

  public:
    Produs();
    Produs(char *denumire, double pret, int canitate);
    Produs(Produs &ob);
    void afisare();
    void setDenumire(char *denumire);
    void setCantitate(int cantitate);
    void setPret(double pret);
    ~Produs();
};