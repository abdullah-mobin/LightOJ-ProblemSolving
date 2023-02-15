#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arSize;
        cin >> arSize;
        int arr[arSize], tem1[arSize], tem2[arSize];
        for (int i = 0; i < arSize; i++)
        {
            cin >> arr[i];
            tem1[i] = arr[i];
            tem2[i] = arr[i];
        }

        sort(arr, arr + arSize);

        sort(tem2, tem2 + arSize, greater<int>());

        int a = 0, d = 0;
        for (int i = 0; i < arSize; i++)
        {
            if (tem2[i] == tem1[i])
            {
                a++;
            }
            if (tem1[i] == arr[i])
            {
                d++;
            }
        }
        if (a == arSize || d == arSize)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}