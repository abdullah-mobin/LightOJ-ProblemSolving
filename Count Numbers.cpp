#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        string line;
        getline(cin, line);
        istringstream ss(line);

        int count = 0;
        int num;
        while (ss >> num)
        {
            count++;
        }

        cout << count << endl;
    }

    return 0;
}

// by chatGPT
