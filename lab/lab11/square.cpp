#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, i, a;
    cout << "enter a number" << endl;
    cin >> n;
    n = n /10;

    for (i = 0; i < n; i++)
    {
        a = i * i;
        
        if(a % 2 == 0 && a != 0)
        {
            cout << a << "\t" ;
        }
        
    }
    cout << endl;
    



}