
#include <fstream>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Spectacol
{
    char nume[100];
    int hi, mi, hf, mf;
};

bool cmpSpectacole(Spectacol a, Spectacol b)
{
    return a.hf*60+a.mf < b.hf*60+b.mf;
}

int main()
{
    int i, n, ult;
    Spectacol *sp;
    char c;

    ifstream fin("spectacole.txt");
    fin >> n;
    sp = new Spectacol[n];

    for(i = 0; i < n; i++)
    {
        fin >> sp[i].hi >> c >> sp[i].mi >> c >> sp[i].hf >> c >> sp[i].mf;
        fin.getline(sp[i].nume, 100);
    }

    fin.close();

    sort(sp, sp+n, cmpSpectacole);

    ofstream fout("programare.txt");

    fout << setfill('0') << setw(2) << sp[0].hi << ":" << setfill('0') << setw(2) << sp[0].mi << "-" << setfill('0') << setw(2) << sp[0].hf << ":" << setfill('0') << setw(2) << sp[0].mf << " " << sp[0].nume << endl;

    ult = sp[0].hf*60 + sp[0].mf;

    for(i = 1; i < n; i++)
        if(sp[i].hi*60 + sp[i].mi > ult)
        {
            fout << setfill('0') << setw(2) << sp[i].hi << ":" << setfill('0') << setw(2) << sp[i].mi << "-" << setfill('0') << setw(2) << sp[i].hf << ":" << setfill('0') << setw(2) << sp[i].mf << " " << sp[i].nume << endl;
            ult = sp[i].hf*60 + sp[i].mf;
        }

    fout.close();

    return 0;
}
