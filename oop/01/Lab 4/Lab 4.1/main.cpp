
#include <iostream>
#include "Stiva.h"

using namespace std;

int main()
{
    Stiva s(4);
    Stiva t(s);

    s.push(1);
    s.push(2);
    t.push(10);
    t.push(20);

    cout << s.pop() << endl;
    cout << t.pop();

    return 0;
}
