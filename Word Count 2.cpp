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
        int count = 0;
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
                finalStr = finalStr + str2 + ' ';
                str2 = "";
                count++;
            }
            else
            {
                str2 += str[i];
            }
        }
        cout << "Count = " << count << el;
    }

    return 0;
}