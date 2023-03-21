#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int rows, coef = 1, i, j;

        cin >> rows;

        for (i = 0; i < rows + 1; i++)
        {
            for (j = 0; j <= i; j++)
            {
                if (j == 0 || i == 0)
                    coef = 1;
                else
                    coef = coef * (i - j + 1) / j;

                cout << coef << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}