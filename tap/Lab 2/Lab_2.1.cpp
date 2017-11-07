
#include <iostream>
#include <fstream>
#include <iomanip>
#include <time.h>
#include <limits.h>

using namespace std;

// O(n^3), t = n^3 * 5 * 10^-9, s <= 1s
// n^3 <= 1/5 * 10^9 => n <= 10^3
void smax3(int v[], int n)
{
    int i, j, k, scrt, smax;
    smax = v[0];

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            scrt = 0;
            for (k = i; k <= j; k++)
            {
                scrt += v[k];
            }
            if (scrt > smax)
            {
                smax = scrt;
            }
        }
    }
}

// O(n^2), t = n^2 * 5 * 10^9, s <= 1s
// n^2 <= 1/5 * 10^9 => n <= 3 * 10^4
void smax2(int v[], int n)
{
    int i, j, scrt, smax;
    smax = v[0];

    for (i = 0; i < n; i++)
    {
        scrt = 0;
        for (j = i; j < n; j++)
        {
            scrt += v[j];
            if (scrt > smax)
            {
                smax = scrt;
            }
        }
    }
}

// O(n), t = n * 5 * 10^-9, s <= 1s
// n <= 1/5 * 10^9
void smax(int v[], int n)
{
    int i, j, scrt, smax;
    smax = INT_MIN;
    scrt = 0;
    for (i = 0; i < n; i++)
    {
        if (scrt < 0)
            scrt = v[i];
        else
            scrt += v[i];

        if (scrt > smax)
        {
            smax = scrt;
        }
    }
}

int main()
{
    int *v, n;
    double t;

    ifstream f("rand.txt");
    f >> n;

    v = new int[n];

    for (int i = 0; i < n; i++)
    {
        f >> v[i];
    }

    t = clock();
    smax3(v, n);
    t = clock() - t;

    printf("Time n^3: %.03lf \n", t / CLOCKS_PER_SEC);

    t = clock();
    smax2(v, n);
    t = clock() - t;

    printf("Time n^2: %.03lf \n", t / CLOCKS_PER_SEC);

    t = clock();
    smax(v, n);
    t = clock() - t;

    printf("Time n: %.03lf \n", t / CLOCKS_PER_SEC);

    return 0;
}