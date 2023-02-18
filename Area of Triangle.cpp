#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        double s, area, rot;
        s = (a + b + c) / 2.0;
        rot = s * (s - a) * (s - b) * (s - c);
        area = sqrt(rot);
        cout << fixed << setprecision(3) << "Area = " << area << endl;
    }
    return 0;
}