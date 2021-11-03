#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int binary, decimal = 0, i = 0;

    cout << "please enter a binary number" << endl;
    cin >> binary;

    do
    {
        decimal = decimal + ((binary % 10) * pow(2, i));
        binary = binary / 10;
        i++;

    } while (binary != 0);

    cout << "The decimal is " << decimal << endl;
    
    return 0;
    

}
