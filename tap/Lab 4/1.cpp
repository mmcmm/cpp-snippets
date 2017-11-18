
#include <iostream>
#include <fstream>
#include "iomanip.h"

using namespace std;

struct Obj {
	int id;
	float c, g;
};

bool cmpObj(Obj x, Obj y) {
	return x.c/x.g > y.c/y.g;
}


// n objects (g1-weight, c1-value), G weight
// continue (orice obj can be cu) O(n log(n)) and discret objects can't be cut dynamic O(n * G) or backtraking. O(2^n)
int main() {
	Obj *v;
	int i, n;
	float p, ct, G;
	
	ifstream fin("obj.txt");
	ofstream fout("r.txt");
	
	fin >> G;
	fin >> n;
	
	v = new Obj[n];
	
	for (i = 0; i < n; i++) {
		v[i].id = i+1;
		fin >> v[i].c >> v[i].g;	
	}
	fin.close();
	
	sort(v, v+n, cmpObj);
	
	ct = 0;
	for (i = 0; i < n; i++) {
		if (v[i].g <= G) {
			fout << "Obj " << v[i].id << " 100%" << endl;
			G = G - v[i].g;
			ct = ct + v[i].c;
		} else {
			p = G / v[i].g;
			fout << "Obj " << v[i].id << " " << setprecision(2) << p * 100 << "%" << endl;
			ct = ct + p*v[i].c;
			break;
		}
	}
	
	fout << ct;
	fout.close();
	
	delete []v;
	
	return 0;
}
