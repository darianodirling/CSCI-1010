#include <iostream>

using namespace std;

int main()
{
    int sum = 0, i, num;

    while (true)
    {
        cout << "Enter a number" << endl;
        cin >> num;
        sum = 0;
        cout << "before for, sum is " << sum << endl;

        for (i = 1; i <= num; i++)
        {
            sum =+ i;
            cout << "in for i is " << i << endl;
            cout << "sum = " << sum << endl;
        }
        cout << "The sum is : " << endl;
    }
}