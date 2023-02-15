#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str, str2;
        getline(cin, str);
        str2 = str;
        reverse(str.begin(),str.end());
        if (str2 == str)
        {
            cout << "Yes! It is palindrome!" << endl;
        }
        else
        {
            cout << "Sorry! It is not palindrome!" << endl;
        }
    }

    return 0;
}