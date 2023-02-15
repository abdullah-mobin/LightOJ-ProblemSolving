#include <iostream>
#include <iomanip>
using namespace std;

long long int fact(int n)
{
    long long int sum = 1;
    for (long long int i = n; i >= 1; i--)
    {
        sum *= i;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        double sum = 0.0;
        cin >> n;
        for (long long int i = 1; i <= n; i++)
        {
            sum += (i / (double)fact(i));
        }
        cout << fixed << setprecision(4) << sum << endl;
    }

    return 0;
}