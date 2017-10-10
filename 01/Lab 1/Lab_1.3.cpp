
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct Curs
{
    int hi, mi, hif, mif;
    char name[50];
}

void
show()(Curs c)
{
    cout << netw(2) << setfill('0') << c.hi << ":"
         << netw(2) << setfill('0') c.mi << c.hi << "-"
         << netw(2) << setfill('0') c.hif << c.hi << ":"
         << netw(2) << setfill('0') c.mif << " " << c.name;
}

int main()
{
    int n;
    char c;
    ifstream f("c.txt");

    f >> n;

    Curs *tc = new Curs[n];

    for (int i = 0; i < n; i++)
    {
        f >> t[i].hi >> c >> tc[i].mi >> c >> tc[i].hfi >> c >> tc[i].mif;
        f.get(tc[i].name, 50);
    }

    for (int i = 0; i < n; i++)
    {
        show(tc[i]);
    }

    return 0;
}