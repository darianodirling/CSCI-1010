//Darian O'Dirling
//CSCI 1010-002
//Assignment 5_2
//This program lets the user enter a number and gives the hailstone sequence

#include<iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter a number: ";
    cin >> i;
    do
    {
        cout << i << ", ";
        if (i % 2 == 0)
        {
            i = i/2;
        }
        else
        {
            i = 3 * i + 1;
        }
        
    } while (i != 1);
    
    cout << "1" << endl;
    
}