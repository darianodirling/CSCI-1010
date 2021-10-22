#include <iostream>
#include <math.h>

using namespace std;

int i = 1;
int a = 1;
int product = 1;

while(i <= n)
{
    while (i <= n)
    {
        product *= a;
        a++;
    }
    sum += product;
    i += 2;
}
cout << "The value is " << sum << endl;