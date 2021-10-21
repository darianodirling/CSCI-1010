//Darian O'Dirling
//CSCI 1010-002
//Lab 9_3
//This program plays rock paper sissors 

#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Please enter three numbers: " << endl;
    cin >> a >> b >> c ;

    //compare a to other values
    if (a < b)
    {
        if (a < c)
        {
            cout << a << " is the smallest number" << endl;
        }
        else
        {
            cout << c << " is the smallest number" << endl;
        }
    }
    //compare b to other values
    else if (b < a)
    {
        if (b < c)
        {
            cout << b << " is the smallest number" << endl;
        }
        else
        {
            cout << c << " is the smallest number" << endl;
        }
        
    }
    
}