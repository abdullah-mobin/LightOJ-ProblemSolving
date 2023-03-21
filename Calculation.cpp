#include <iostream>
#include <cmath>
using namespace std;

int bigmod(int a, int b, int m)
{
    if (b == 0)
    {
        return 1 % m;
    }
    int x = bigmod(a, b / 2, m);
    x = (x * x) % m;
    if (b % 2 == 1)
    {
        x = (x * a) % m;
    }
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int a, b, c;
        cin >> a >> b >> c;
        cout << "Result = " << bigmod(a, b, c) << endl;
    }

    return 0;
}