
#include <iostream>
#include "Punct.h"

using namespace std;

Punct::Punct()
{
    x = 0;
    y = 0;
}

Punct::Punct(double x, double y)
{
    this->x = x;
    this->y = y;
}

ostream &operator<<(ostream &out, Punct ob)
{
    out << ob.x << " " << ob.y << endl;
    return out;
}

bool Punct::operator<(Punct p)
{
    if (this->x == p.x)
    {
        return this->y < p.y;
    }
    else
    {
        return this->x < p.x;
    }
}

void Punct::setX(double x)
{
    this->x = x;
}

void Punct::setY(double y)
{
    this->y = y;
}

double Punct::getX()
{
    return x;
}

double Punct::getY()
{
    return y;
}