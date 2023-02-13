#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, a);
        if (a.back() == '2' || a.back() == '4' || a.back() == '6' || a.back() == '8' || a.back() == '0')
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