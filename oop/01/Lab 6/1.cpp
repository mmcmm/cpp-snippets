#include <iostream>
#include <math.h>
using namespace std;

class Complex {
	double re, im;
public:
	Complex() {
		re = 0;
		im = 0;
	}		
	Complex(double re, double im) {
		this->re = re;
		this->im = im;
	}
	
	void afisare() {
		cout << re << "+" << im << "i" << endl;
	}
	
	Complex operator+(Complex z){
		Complex suma;
		suma.re = this->re + z.re;
		suma.im = this->im + z.im;
		return suma;
	}
	
	friend double modul(Complex &ob);
};

double modul(Complex &ob){
	return sqrt(ob.re * ob.re + ob.im * ob.im);
}


int main() {
	Complex z1(2, 3), z2(3, 4), z3;
	z3 = z1 + z2;
	
 	z3.afisare();
	
	// cout << modul(z1);
	
	return 0;	
}