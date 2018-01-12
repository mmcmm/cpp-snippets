
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    map<string, string> agenda;
    ifstream f("agenda.txt");
    char linie[100], *p;
    string nume, nrTel;
    char numecautat[30];

    while (f.getline(linie, 100) != NULL)
    {
        p = strtok(linie, " ");
        nume = p;
        p = strtok(NULL, " ");
        nrTel = p;
        agenda.insert(make_pair(nume, nrTel));
    }
    cout << "Nume: ";
    cin >> numecautat;
    nume = numecautat;

    map<string, string>::iterator it;
    it = find(agenda.begin(), agenda.end(), nume);
    if (it != NULL)
    {
        cout << "Tel: " << (*it).second;
    }
    else
    {
        cout << "No";
    }

    for (it = agenda.begin(); it != agenda.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}
