#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "n = ";
    cin >> n;

    int **m = new int *[n];

    for (int i = 0; i < n; i++)
    {
        m[i] = new int[i + 1];
        for (int j = 0; j < i + 1; j++)
        {
            m[i][j] = j + 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] m[i];
    }

    delete[] m;

    return 0;
}