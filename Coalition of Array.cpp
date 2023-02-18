#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        cin >> b;
        int x = a + b;
        int arr2[b];
        for (int i = 0; i < b; i++)
        {
            cin >> arr2[i];
        }
        int mod[x];
        copy(arr, arr + a, copy(arr2, arr2 + b, mod));

        sort(mod, mod + x);
        for (int i = 0; i < x; i++)
        {
            cout << mod[i] << " ";
        }
        cout << endl;
    }

    return 0;
}