#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[] = {6, 28, 496, 8128, 33550336};
        int a;
        cin >> a;
        for (size_t i = 0; i < 5; i++)
        {
            if (arr[i] <= a)
            {
                cout << arr[i] << endl;
            }
        }
        cout << endl;
    }

    return 0;
}