//Darian O'Dirling
//CSCI 1010-002
//Lab 10_4
//This program lets the user enter a number and then all the even squares
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, i, a;
    cout << "enter a number" << endl;
    cin >> n;
    n = n /10;

    //repeat loop as many times as the number entered
    for (i = 0; i < n; i++)
    {
        //find all perfect squares
        a = i * i;
        //only print the even squares
        if(a % 2 == 0 && a != 0)
        {
            cout << a << "\t" ;
        }
        
    }
    cout << endl;
    



}