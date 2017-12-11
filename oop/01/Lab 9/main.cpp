#include <iostream.h>
#include "Aplicatie.h"
#include "Website.h"

using namespace std;

int main()
{
    Website w;
    w.afisare();

    w.setDenumire("aa.com");
    w.setNrUtilizatori(29);

    w.afisare();

    Website w2 = w;
    w2.afisare();
}