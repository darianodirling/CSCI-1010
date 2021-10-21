#include <iostream>

using namespace std;

int main()
{
    double x;
    cout << "Enter Amount: ";
    cin >> x;


    if(x >= 500)
    {
        x = x * .75;
    }
    else
    {
        x = x * .85;
    }

    cout << "the total is: " << x << endl;

}