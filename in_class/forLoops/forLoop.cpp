
//Darian O'Dirling
//CSCI 1010-002
//Assignment 5_1
//This program lets the user enter a series of numbers and then adds up the even numbers

#include<iostream>
using namespace std;

int main()
{
    int i, a, sum = 0;

    cout << "Number: " << endl;

    for (i = 0; i < 10; i++)
    {
        cin >> a;
        sum = sum + a;
    }
    cout << "Sum " << sum << endl;
}