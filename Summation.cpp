#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin>>x;
    
        cout <<"Sum = " << (x/10000)+(x%10) << endl;
        
    }

    return 0;
}