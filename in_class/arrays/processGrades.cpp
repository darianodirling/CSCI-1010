#include <iostream>

using namespace std;

int main()
{
    const int MAX = 15;

    int grades[MAX];

    for (int i = 0; i < MAX; i++)
    {
        cout << "enter grade of student " << i + 1 << ": ";
        cin >> grades[i];

    }
}