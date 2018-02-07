# include <iostream>

class Farmacie {
	char *den;
	int nrAngajati;
	int nrLuni;
	double* CaLuna;
	int id;

public:
	Farmacie();
	Farmacie(char *den, int nrAngajati, int nrLuni, double *CaLuna, int id);
	Farmacie(const Farmacie &ob);
	~Farmacie();
	char* getDen();
	int getNrAngajati();
	int getNrLuni();
	double* getCaLuna();
	int getId();
	void afisare();
	Farmacie& operator=(const Farmacie &ob);
	Farmacie& operator+(int v);
	Farmacie& operator++();
	Farmacie& operator++(int v);
	friend ostream& operator<<(ostream &out, Farmacie &ob);
	friend istream &operator>>(istream &in, Farmacie &ob);
	operator int();
};