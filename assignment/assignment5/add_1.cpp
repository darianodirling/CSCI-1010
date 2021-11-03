//Darian O'Dirling
//CSCI 1010-002
//Assignment 5_1
//This program lets the user enter a series of numbers and then adds up the even numbers

#include<iostream>
using namespace std;

int main()
{
    int a, sum = 0;

    cout << "Enter numbers, end by 0: " << endl;

    do
    {
        
        cin >> a;

        if(a % 2 == 0)
        {
            sum = a + sum;

        }
       
    }while (a != 0);

    cout << "The sum of the even numbers: " << sum << endl;


   

    return 0;
}