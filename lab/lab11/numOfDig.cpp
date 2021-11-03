#include <iostream>

using namespace std;

int main()
{
    int i, n = 1, count = 0;
    cout << "Enter a number: " << endl;
    cin >> i ;
    do
    {
        i = i / 10;
        count++;

    }while (i != 0);
    

    cout << "The number of Digits is is : " << count << endl;

    
}