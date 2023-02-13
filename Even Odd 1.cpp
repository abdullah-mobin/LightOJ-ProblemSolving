#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }

    return 0;
}