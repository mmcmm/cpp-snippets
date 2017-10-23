
#include <iostream>
#include "Carte.h"

using namespace std;

Carte::Carte()
{
    titlu = new char[4];
    strcpy(titlu, "####");

    autor = new char[4];
    strcpy(autor, "####");

    editura = new char[4];
    strcpy(editura, "####");

    anAparitie = 2017;
}

Carte::Carte(char *titlu, char *autor, char *editura, int anAparitie)
{
    this->titlu = new char[strlen(titlu) + 1];
    strcpy(this->titlu, titlu);

    this->autor = new char[strlen(autor) + 1];
    strcpy(this->autor, autor);

    this->editura = new char[strlen(editura) + 1];
    strcpy(this->editura, editura);

    this->anAparitie = anAparitie;
}

Carte::Carte(char *titlu, char *editura)
{
    this->titlu = new char[strlen(titlu) + 1];
    strcpy(this->titlu, titlu);

    this->editura = new char[strlen(editura) + 1];
    strcpy(this->editura, editura);

    this->autor = new char[4];
    strcpy(this->autor, "####");

    this->anAparitie = 2017;
}

Carte::Carte(char *titlu, int anAparitie)
{
    this->titlu = new char[strlen(titlu) + 1];
    strcpy(this->titlu, titlu);

    autor = new char[4];
    strcpy(autor, "####");

    editura = new char[4];
    strcpy(editura, "####");

    this->anAparitie = anAparitie;
}

Carte::~Carte()
{
    if (this->titlu)
        delete[] titlu;
    if (this->autor)
        delete[] autor;
    if (this->editura)
        delete[] editura;
}

void Carte::afisare()
{
    cout << titlu << " " << autor << " " << editura << " " << anAparitie << endl;
}

char *Carte::getTitlu()
{
    return titlu;
}

int Carte::getAnAparitie()
{
    return anAparitie;
}

char *Carte::getEditura()
{
    return editura;
}

char *Carte::getAutor()
{
    return autor;
}

void Carte::setTitlu(char *t)
{
    if (titlu)
    {
        delete[] titlu;
    }
    this->titlu = new char[strlen(t) + 1];
    strcpy(this->titlu, t);
}

void Carte::setAnAparitie(int a)
{
    this->anAparitie = a;
}

void Carte::setEditura(char *ed)
{
    if (editura)
    {
        delete[] editura;
    }
    this->editura = new char[strlen(ed) + 1];
    strcpy(this->editura, ed);
}

void Carte::setAutor(char *a)
{
    if (autor)
    {
        delete[] autor;
    }
    this->autor = new char[strlen(a) + 1];
    strcpy(this->autor, a);
}
