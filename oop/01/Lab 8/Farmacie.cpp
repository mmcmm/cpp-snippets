# include <iostream>
# include "Farmacie.h"

using namespace std;


Farmacie::Farmacie() {
	den = new  char[4];
	strcpy(den, "####");
	id = 0;
	nrLuni = 0;
	nrAngajati = 0;
}

Farmacie::Farmacie(char* den, int nrAngajati, int nrLuni, double *CaLuna, int id) {
	this->den = new  char[strlen(den)+1];
	strcpy(this->den, den);
	this->id = id;
	this->nrLuni = nrLuni;
	this->CaLuna = new double[nrLuni];
	for (int i = 0; i < nrLuni; i++) {
		this->CaLuna[i] = CaLuna[i];
	}
	this->nrAngajati = nrAngajati;
}

Farmacie::Farmacie(const Farmacie &ob) {
	this->den = new  char[strlen(ob.den)+1];
	strcpy(this->den, ob.den);
	this->id = ob.id;
	this->nrLuni = ob.nrLuni;
	this->CaLuna = new double[ob.nrLuni];
	for (int i = 0; i < nrLuni; i++) {
		this->CaLuna[i] = ob.CaLuna[i];
	}
	this->nrAngajati = ob.nrAngajati;
}

Farmacie::~Farmacie() {
	if (this->den != NULL) {
		delete[] this->den;
	}
	if (this->CaLuna != NULL) {
		delete[] this->CaLuna;
	}
}

char* Farmacie::getDen() {
	return this->den;
}

int Farmacie::getNrAngajati() {
	return this->nrAngajati;
}

int Farmacie::getNrLuni() {
	return this->nrLuni;
}

double* Farmacie::getCaLuna() {
	return this->CaLuna;
}

int Farmacie::getId() {
	return this->id;
}


Farmacie& Farmacie::operator=(const Farmacie &ob) {
	if (den)
			delete[] den;
	if (CaLuna)
			delete[] CaLuna;
	
	this->den = new char[strlen(ob.den)+1];
	strcpy(this->den, ob.den);
	this->nrAngajati = ob.nrAngajati;
	this->nrLuni =  ob.nrLuni;
	this->CaLuna = new double[nrLuni];
	for (int i = 0; i < nrLuni; i++) {
		this->CaLuna[i] = ob.CaLuna[i];
	}
	this->id = ob.id;
	return *this;
}

Farmacie& Farmacie::operator+(int v) {
	this->nrAngajati = this->nrAngajati + v;
	return *this;
}


Farmacie& Farmacie::operator++() {
	this->nrAngajati++;
	return *this;
}

Farmacie& Farmacie::operator++(int v) {
	Farmacie& temp = *this;
	this->nrAngajati++;
	return temp;
}

ostream& operator<<(ostream &out, Farmacie &ob) {
	
}

istream &operator>>(istream &in, Farmacie &ob){
	cout << "Den: ";
	char buf[50];
	in.get(buf, 50);
	if (ob.den != NULL) {
		delete []ob.den;	
	}
	ob.den = new char[strlen(buf)+1]
	strcpy(ob.den, buf);
	
	cout << "Nr. ang: ";
	in >> ob.nrAngajati;
	
	cout << "Nr. Luni: ";
	in >> ob.nrLuni;
	if (ob.CaLuna != NULL) {
		delete []ob.CaLuna;	
	}
	
	ob.CaLuna = new double[nrLuni];
	
	for (int i = 0; i < ob.nrLuni; i++) {
		in >> ob.CaLuna[i];	
	}
	cout << "Id: ";
	in >> ob.id;
	
	return in;
}

Farmacie::operator int() {
	return this->id;
}