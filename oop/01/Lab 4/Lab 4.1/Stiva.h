class Stiva
{
    int *v;
    int dim; // dim max
    int crt; // nr crt de elem

  public:
    Stiva(int dim);
    Stiva(Stiva &s);
    void push(int x);
    int pop();
    void afisare();
};