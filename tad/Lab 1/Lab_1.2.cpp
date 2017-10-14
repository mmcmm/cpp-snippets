#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// using namespace std;

void sort(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
    }
}

int cmp(const void *a, const void *b)
{
    int va = *(int *)a;
    int vb = *(int *)b;

    if (va < vb)
    {
        return -1;
    }
    if (va > vb)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int *v, *w;
    FILE *f;
    int i, n;
    double t;

    f = fopen("rand", "r");

    fscanf(f, "%d ", &n);
    v = (int *)malloc(n * sizeof(int));
    w = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        fscanf(f, "%d", &v[i]);
        w[i] = v[i];
    }
    fclose(f);

    t = clock();
    sort(v, n);
    t = clock() - t;

    printf("Time 1: %.03lf \n", t / CLOCKS_PER_SEC);

    t = clock();
    qsort(w, n, sizeof(int), cmp);
    t = clock() - t;

    printf("Time 2: %.03lf \n", t / CLOCKS_PER_SEC);

    return 0;
}