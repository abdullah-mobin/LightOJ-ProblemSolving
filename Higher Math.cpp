#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t,r=0;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a*a + b*b == c*c) || (a*a + c*c == b*b ) || (c*c + b*b == a*a))
        {
            cout << "Case " << ++r << ": " << "yes" << endl;
        }
        else
        {
            cout << "Case " << ++r << ": " << "no" << endl;
        }
        
    }

    return 0;
}