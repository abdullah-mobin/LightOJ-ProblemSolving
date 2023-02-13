#include <iostream>
#include <string>
#include <algorithm>
#define el endl
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str, str2 = "", finalStr = "";
        getline(cin, str);
        for (int i = 0; i < str.length(); ++i)
        {
            if (str[i] == ' ' || i + 1 == str.length())
            {
                if (i + 1 == str.length())
                {
                    str2 += str[i];
                }

                reverse(str2.begin(), str2.end());
                
                finalStr = finalStr + str2 + ' ';
                str2 = "";
            }
            else
            {
                str2 += str[i];
            }
        }
        cout << finalStr << el;
    }

    return 0;
}