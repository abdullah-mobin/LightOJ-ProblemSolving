#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t, x = 0;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        cout << "Case " << ++x << ": ";
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0 && i < a)
            {
                cout << i << " ";
            }
            if (i == a)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}