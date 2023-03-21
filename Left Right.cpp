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
        string str;
        getline(cin,str);
        for (size_t i = 0; i < str.length(); i++)
        {
            if (str[i]=='L')
            {
                str[i]=str[i-1];
            }
            else if (str[i]=='R')
            {
                str[i]=str[i+1];
            }
        }
        cout << str << endl;
        
    }
    
    return 0;
}