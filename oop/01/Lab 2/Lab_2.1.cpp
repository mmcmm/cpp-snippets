#include <iostream.h>
#include <math.h>

using namespace std;

class Point
{
    double x, y; // private

  public:
    void init(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    void show()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }

    double dist(Point p)
    {
        return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
    }

    void setX(double x)
    {
        this->x = x;
    }

    void setY(double y)
    {
        this->y = y;
    }
};

int main()
{
    Point p1, p2;

    p1.init(1.2, 3.4);
    p2.init(3.5, 1.7);

    p1.show();
    p2.show();

    cout << "Dist: " << p1.dist(p2) << endl;

    p1.setX(6);
    p2.setY(9);

    p1.show();
    p2.show();

    cout << "Dist: " << p1.dist(p2) << endl;

    return 0;
}
