#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int binary, sum , num, i = 0;
    cout << "Enter a binary:" << endl;
    cin >> binary;
    
    do
    {
        sum =+ (binary % 10) * pow(2,i);
        binary = binary / 10;  
        i++;
        
        
    } while (sum != 0);

    cout << binary << endl;

}
