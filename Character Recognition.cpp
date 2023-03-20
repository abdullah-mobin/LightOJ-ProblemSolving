#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        if ((int)c <= 90 && (int)c >= 65)
        {
            cout<< "Uppercase Character" <<endl;
        }
        else if ((int)c <= 122 && (int)c >= 97)
        {
            cout<< "Lowercase Character" <<endl;
        }
        else if ((int)c <= 57 && (int)c >= 48)
        {
            cout<< "Numerical Digit" <<endl;
        }
        else
        {
            cout<< "Special Characters" <<endl;
        }
    }

    return 0;
}