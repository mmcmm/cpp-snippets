
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// using namespace std;

int main()
{
    FILE *f;
    int min, max, r, i, n;
    char nf[100];

    printf("File: ");
    scanf("%s", nf);

    printf("Nr Val: ");
    scanf("%d", &n);

    printf("Min: ");
    scanf("%d", &min);

    printf("Max: ");
    scanf("%d", &max);

    f = fopen(nf, "w");

    srand(time(NULL));
    fprintf(f, "%d \n", n);

    for (i = 0; i < n; i++)
    {
        r = rand() * rand();
        r = min + r % (max - min + 1);
        fprintf(f, "%d ", r);
    }

    fclose(f);

    return 0;
}