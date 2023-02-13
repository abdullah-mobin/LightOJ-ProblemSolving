#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, c = 0;
    cin >> t;
    while (t--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 3);
        cout << "Case " << ++c << ": ";
        for (int i = 0; i < 3; i++)
        {
            if (i == 2)
            {
                cout << arr[i] << endl;
                break;
            }
            else
            {
                cout << arr[i] << " ";
            }
        }
    }

    return 0;
}