
# include <iostream>
# include "Fractie.h"

using namespace std;
 
Fractie::Fractie() {
	nr = 0;
	num = 1;
}

Fractie::Fractie(int nr, int num) {
	this->nr = nr;
	this->num = num;
}

void Fractie::afisare() {
	cout << nr << "/" << num << endl;
}

void Fractie::setNr(int v) {
	nr = v;
}

void Fractie::setNum(int v) {
	num = v;
}

int Fractie::getNr() {
	return nr;
}

int Fractie::getNum() {
	return num;
}

Fractie Fractie::operator+(Fractie f2) {
	Fractie suma;
	suma.nr = this->nr * f2.num + this->num * f2.nr;
	suma.num = this->num * f2.num;
	
	return suma;	
}

Fractie operator*(Fractie f1, Fractie f2) {
	Fractie produs;
	produs.nr = f1.nr * f2.nr;
	produs.num = f2.num * f2.num;
	
	return produs;
}

Fractie operator*(int v, Fractie f) {
	Fractie produs;
	produs.nr = v * f.nr;
	produs.num = f.num;
	
	return produs;
}
int cmmdc(int a, int b) {
   int c = a % b;
	while (b) {
		c = a % b;
		a = b;
		b = c;
	}
	return c;
}

Fractie& Fractie::operator~() {
	 int d = cmmdc(this->nr, this->num);
	 this->nr = this->nr / d;
	 this->num = this->num / d;
	 
	 return *this;
}