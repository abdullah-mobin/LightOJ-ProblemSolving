#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >>b;
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << b << " ";
            }
            cout << endl;
        }
        for (int i = 1; i <= a; i++)
        {
            for (int j = i; j < a; j++)
            {
                cout << b << " ";
            }
            cout << endl;
        }
        
    }

    return 0;
}