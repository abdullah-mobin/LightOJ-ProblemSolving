#include <iostream>
#include <iomanip>
using namespace std;

void arrayinput(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int solv(int arr[], int n)
{
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            sum+=arr[i];
        }
    }
    return sum;
}

int main()
{
    int t,r=0;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int arr[num];
        arrayinput(arr, num);
        cout << "Case " << ++r << ": " << solv(arr, num) << endl;
    }

    return 0;
}