#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex z1, z2, z3;
    z1.init(1, 2);
    z2.init(3, 4);

    z3 = z1.add(z2);
    z3.print();

    (z1.add(z2)).print();

    z1.setRe(10);
    z1.print();

    z2.setIm(20);
    z2.print();

    return 0;
}