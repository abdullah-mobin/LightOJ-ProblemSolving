#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

string parity(size_t x)
{
    if (__builtin_parity(x))
    {
        return "odd";
    }
    return "even";
       
}

int main()
{
    int t,r=0;
    cin >> t;
    while (t--)
    {
        size_t x;
        cin >> x;
        cout << "Case " << ++r << ": " << parity(x) << endl;
    }

    return 0;
}