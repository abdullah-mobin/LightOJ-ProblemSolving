#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k, sum = 0;
        cin >> x >> k;
        for (int i = 1; i <= k; i++)
        {
            sum += pow(x, i);
        }
        cout << "Result = " << sum << endl;
    }

    return 0;
}