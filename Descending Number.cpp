#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    for (int i = 1000; i >= 1; i--)
    {
        if (x == 5)
        {
            cout << i << endl;
            x = 1;
        }
        else
        {
            cout << i << " ";
            x++;
        }
    }

    return 0;
}