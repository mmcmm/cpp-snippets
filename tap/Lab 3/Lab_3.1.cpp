#include <iostream>
#include <fstream>

using namespace std;

int a[101][101], L[101], cc, n, m;

void DF(int v)
{
    L[v] = cc;

    for (int i = 1; i <= n; i++)
    {
        if (a[v][i] == 1 && L[i] == 0)
        {
            DF(i);
        }
    }
}

int main()
{
    int x, y, i, j;

    ofstream g("comp.txt");
    ifstream f("graf.txt");
    f >> n >> m;

    for (i = 0; i < m; i++)
    {
        f >> x >> y;
        a[x][y] = a[y][x] = 1;
    }

    f.close();
    cc = 0;

    for (i = 1; i <= n; i++)
    {
        if (L[i] == 0)
        {
            cc++;
            DF(i);
        }
    }

    for (i = 1; i <= cc; i++)
    {
        g << "cc" << i << ": ";
        for (j = 1; j <= n; j++)
        {
            if (L[j] == i)
            {
                g << j << " ";
            }
        }
        g << endl;
    }

    g.close();

    return 0;
}