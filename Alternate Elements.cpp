#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arrSize;
        cin >> arrSize;
        int arr[arrSize];
        for (int i = 0; i < arrSize; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < arrSize; i += 2)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}