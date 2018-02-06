#include <iostream>
#include "Sportiv.h"
#include "Tenismen.h"

using namespace std;

int main()
{
    Sportiv s1, s4;
    Sportiv s2(12, "Nadia", true, 34500);

    Sportiv s3 = s2;
    cin >> s4;

    s1 = s4;

    Tenismen t1;
    t1 += 2;
    t1 += 6;

    cout << t1[0];

    return 0;
}
