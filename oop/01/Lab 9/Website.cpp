#include <iostream.h>
#include "Website.h"
#include "Aplicatie.h"
#include <string.h>

using namespace std;

Website::Website() : Aplicatie() {
	nrPagini = 0;
	ptMobil = false;
}

Website::Website(char* denumire, double pret, int nrUtilizatori, int diagonala, int nrPagini, bool ptMobil) 
	: Aplicatie(denumire, pret, nrUtilizatori, diagonala) {
	this->nrPagini = nrPagini;
	this->ptMobil = ptMobil;
}

void Website::afisare() {
	Aplicatie::afisare();
	cout << nrPagini << endl
		<< ptMobil << endl;
}

void Website::setNrPagini(int nrPagini) {
	this->nrPagini = nrPagini;
}

void Website::setPtMobil(bool ptMobil) {
	this->ptMobil = ptMobil;
}

int Website::getNrPagini() {
	return nrPagini;
}

bool Website::isPtMobil() {
	return ptMobil;
}

Website::Website(const Website &ob) : Aplicatie(ob) {
	nrPagini = ob.nrPagini;
	ptMobil = ob.ptMobil;
}

Website::~Website(){}