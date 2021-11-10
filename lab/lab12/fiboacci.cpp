//Darian O'Dirling
//CSCI 1010-002
//Lab 12_2
//This program  prints out a fibbonacci sequence
#include <iostream>

using namespace std;

int main()
{
    int fib[40];
    fib[0] = 0;
    fib[1] = 1;

    cout << fib[0] << " " << fib[1] << " ";

    for (int i = 2; i < 40; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << " ";
    }
    
}