#include <iostream>

using namespace std;

class Data
{
    int zi, luna, an;

  public:
    Data()
    {
        zi = 20;
        luna = 10;
        an = 2017;
    }

    Data(int zi, int luna, int an)
    {
        this->zi = zi;
        this->luna = luna;
        this->an = an;
    }

    Data(int zi, int luna)
    {
        this->zi = zi;
        this->luna = luna;
        this->an = 2017;
    }

    Data(int zi)
    {
        this->zi = zi;
        this->luna = 10;
        this->an = 2017;
    }

    void setZi(int zi)
    {
        this->zi = zi;
    }

    void setLuna(int luna)
    {
        this->luna = luna;
    }

    void setAn(int an)
    {
        this->an = an;
    }

    int getZi()
    {
        return zi;
    }

    int getLuna()
    {
        return luna;
    }

    int getAn()
    {
        return an;
    }

    void print()
    {
        cout << zi << "/" << luna << "/" << an << endl;
    }
};

int main()
{
    Data ob;
    ob.print();

    ob.setZi(21);
    ob.setLuna(11);
    ob.setAn(2018);
    ob.print();

    cout << ob.getZi();

    return 0;
}