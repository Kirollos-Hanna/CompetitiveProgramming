#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> people;
    int person;
    bool isEasy = true;
    for (int i = 0; i < n; i++)
    {
        cin >> person;
        people.push_back(person);
    }

    for (int i = 0; i < n; i++)
    {
        if (people[i] == 1)
        {
            cout << "HARD" << endl;
            isEasy = false;
            break;
        }
    }

    if (isEasy)
    {
        cout << "EASY" << endl;
    }
    return 0;
}
