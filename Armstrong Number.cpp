#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,sum=0,rem,tem;
        cin >> a;
        tem = a;
        while (tem!=0)
        {
            rem = tem %10;
            sum = sum + pow(rem,3);
            tem = tem / 10;
        }
        if (sum==a)
        {
            cout << a << " is an armstrong number!"<<endl;
        }
        else
        {
            cout << a << " is not an armstrong number!"<<endl;
        }
        

    }
    
    return 0;
}