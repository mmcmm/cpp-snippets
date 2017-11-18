class Automobil
{
    char *marca;
    int capacitate;
    double pret;
    static double TVA;
    static int nrAuto;

  public:
    Automobil();
    Automobil(char *marca, int capacitate, double pret);
    void afisare();
    void setMarca(char *v);
    void setCapacitate(int v);
    void setPret(double v);
    char *getMarca();
    int getCapacitate();
    double getPret();

    Automobil(const Automobil &ob);
    ~Automobil();
    static int nrAutomobil();
};