#include <iostream>
#include <string.h>

using namespace std;

#pragma once

class Sportiv
{
    int id;
    char *nume;
    bool dePerformanta;
    double venitAnual;

  public:
    Sportiv();
    Sportiv(int id, char *nume, bool dePerformanta, double venitAnual);
    Sportiv(const Sportiv &sportiv);
    ~Sportiv();

    void setId(int id);
    int getId();
    void setNume(char *nume);
    char *getNume();
    void setDePerformanta(bool dePerformanta);
    bool getDePerformanta();

    Sportiv &operator=(const Sportiv &ob);
    friend istream &operator>>(istream &in, Sportiv &ob);
};