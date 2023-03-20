#include <iostream>
#include <iomanip>
using namespace std;

int zeros (int n)
{
    int res=0;
    for (size_t i = 5; n/i >= 1; i*=5)
    {
        res += (n/i);
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        cout << zeros(a) << endl;
    }
    
    return 0;
}