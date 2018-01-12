#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> baza;
    int n;

    cout << "n = ";
    cin >> n;

    while (n)
    {
        baza.push(n % 2);
        n = n / 2;
    }

    while (!baza.empty())
    {
        cout << baza.top();
        baza.pop();
    }
    return 0;
}