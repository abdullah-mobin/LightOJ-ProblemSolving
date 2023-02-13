#include <iostream>
#include <iomanip>
using namespace std;

long long int fact(long long int a)
{
    long long int s = 1;
    for (long long int i = a; i >=1; i--)
    {
        s *= i;
    }
    return s;
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a;
        cin >> a;
        cout << fact(a) << endl;
    }

    return 0;
}