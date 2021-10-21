#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double cb, cof, total;

    cout << "How many cheeseburgers: ";
    cin >> cb;
    cb = cb * 5.89;

    cout << "How many coffees: ";
    cin >> cof;
    cof = cof * 3.99;

    total = (cb + cof) * 1.07;

    cout << "The total for our royal customer is: $" << total << endl;



    return 0;
}