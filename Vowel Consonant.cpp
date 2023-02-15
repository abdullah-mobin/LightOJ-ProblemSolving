#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str,vStr="",cStr="";
        int vowel = 0;
        getline(cin, str);
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vStr+=str[i];
            }
            else if (str[i]==' ')
            {
                continue;
            }
            
            else
            {
                cStr+=str[i];
            }
        }
        cout << vStr << endl;
        cout << cStr << endl;
    }

    return 0;
}