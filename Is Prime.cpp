#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    for (long long int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a;
        cin >> a;
        if (is_prime(a))
        {
            cout << a << " is a prime" << endl;
        }
        else
        {
            cout << a << " is not a prime" << endl;
        }
    }

    return 0;
}