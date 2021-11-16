//Darian O'Dirling
//CSCI 1010-002
//Lab 9_1
//This program use the least amount of weights to balance a scale

#include<iostream>
using namespace std;

int main()
{
    int a, sum = 0;

    while(true)
    {
        cout << "enter number" << endl;
        cin >> a;

        if(a == 0)
        {
            cout << "sum = " << sum << endl;
            break;
        }
        else
        {
            sum = a + sum;
        }


        
    }
    return 0;
}
