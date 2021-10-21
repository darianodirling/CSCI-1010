//Darian O'Dirling
//CSCI 1010-002
//assignment 4_2
//Program compares two numbers relation to each other

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Please enter two integers" << endl;
    cin >> a >> b;

    if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    }
    else if (a < b)
    {
        cout << a << " is less than " << b << endl;
    }
    else if (a == b)
    {
        cout << a << " is equal to " << b << endl;
    }
    
    return 0;
}