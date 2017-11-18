
# include <iostream>
# include "fractie.h"

using namespace std;



int main() {
	Fractie f1(3, 4), f2(2, 5), f3;
	
	f3 = f1 + f2;
	
	f3.afisare();
	
	return 0;
}