#include <iostream>
#include <math.h>

using namespace std;


int compute(int x)
{
    int total = 3 * pow(x, 5) + 2 * pow(x,4) - 5 * pow(x,3) - pow(x,2) + 7 * x - 6;
    cout << "The value of the polynomial is " << total << endl;
    return total;
}

int main()
{
    int x;
    cout << "Enter a value for x: ";
    cin >> x;
    compute(x);





}