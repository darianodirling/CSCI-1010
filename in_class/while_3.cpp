#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter number" << endl;
    cin >> n;

    while (n != 0)
    {
        sum += n;
        cin >> n;
    
    }

    cout << "The sum is " << sum << endl;

    return 0;
}