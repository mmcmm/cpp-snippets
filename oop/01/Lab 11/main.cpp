#include <iostream>
#include "Punct.h"
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

bool comp(Punct p1, Punct p2)
{
    return p1 < p2;
}

int main()
{
    vector<Punct> vp;
    double x, y;

    ifstream f("Punct.txt");

    while (f >> x >> y)
    {
        Punct ob(x, y);
        vp.push_back(ob);
    }

    sort(vp.begin(), vp.end(), comp);

    vector<Punct>::iterator it;
    for (it = vp.begin(); it != vp.end(); it++)
    {
        cout << *it;
    }

    return 0;
}