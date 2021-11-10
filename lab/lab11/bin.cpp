//Darian O'Dirling
//CSCI 1010-002
//Lab 11_3
//This program lets the user enter a binary number and then get the decimal value
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int binary;
    int decimal = 0;
    int i = 0;

    //User enters binary set
    cout << "Enter a binary number" << endl;
    cin >> binary;

    do
    {
        //converts first digit to decimal
        decimal = decimal + ((binary % 10) * pow(2, i));
        //updates binary point
        binary = binary / 10;
        //updates point for calulation
        i++;

    } while (binary != 0);

    //prints results
    cout << "The equivilant decimal value is: " << decimal << endl;
    
    return 0;
    

}
