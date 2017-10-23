class Carte
{
    char *titlu;
    int anAparitie;
    char *editura;
    char *autor;

  public:
    Carte();
    Carte(char *titlu, char *autor, char *editura, int anAparitie);
    Carte(char *titlu, char *editura);
    Carte(char *titlu, int an);
    ~Carte();
    void afisare();
    char *getTitlu();
    int getAnAparitie();
    char *getEditura();
    char *getAutor();
    void setTitlu(char *t);
    void setAnAparitie(int a);
    void setEditura(char *ed);
    void setAutor(char *a);
};