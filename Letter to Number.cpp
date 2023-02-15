#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str;
        vector<int> numStr;
        getline(cin, str);
        for (int i = 0; i < str.length(); i++)
        {
            int x = (int)str[i] - 64;
            cout << x;
        }
        cout << endl;
    }

    return 0;
}