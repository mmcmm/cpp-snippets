
#include <iostream>

using namespace std;

class Punct
{
    double x, y;

  public:
    Punct();
    Punct(double x, double y);

    friend ostream &operator<<(ostream &out, Punct ob);
    bool operator<(Punct p);

    void setX(double x);
    void setY(double y);
    double getX();
    double getY();
};