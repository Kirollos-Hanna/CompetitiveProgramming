#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n, t;
    cin >> n;
    cin >> t;

    string number = "";

    if (t == 10 && n == 1)
    {
        cout << -1 << endl;
        return 0;
    }

    if (n == 1)
    {
        cout << t << endl;
        return 0;
    }

    if (t == 10 && n % 2 == 0)
    {
        for (int i = 0; i < (n / 2); i++)
        {
            number += "10";
        }
        cout << number << endl;
        return 0;
    }

    if (t == 10 && n % 2 == 1)
    {
        for (int i = 1; i < n; i++)
        {
            number += "1";
        }
        number += "0";
        cout << number << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        number += to_string(t);
    }

    cout << number << endl;

    return 0;
}
