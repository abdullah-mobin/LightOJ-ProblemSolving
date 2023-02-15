#include <iostream>
#include <iomanip>
using namespace std;

long long int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

long long int lcm(int a, int b)
{
    long long int gcd_val = gcd(a, b);
    return (a / gcd_val) * b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << "LCM = " << lcm(a, b) << endl;
    }

    return 0;
}