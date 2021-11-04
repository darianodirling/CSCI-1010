//Darian O'Dirling
//CSCI 1010-002
//Lab 11_2
//This program lets the user enter a number and then get the number of digits
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