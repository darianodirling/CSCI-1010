//Darian O'Dirling
//CSCI 1010-002
//lab 6_2
//Find number of bills used for an amount of cash
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int twenty, ten, five, one, totals;

    cout << "Enter a number of U.S. dollar: ";
    cin >> totals;

    twenty = totals / 20;
    ten = (totals % 20) / 10 ;
    five = ((totals % 20 ) % 10) / 5;
    one = ((totals % 20 ) % 10) % 5;

    cout << "number of 20 bills: " << twenty << endl;
    cout << "number of 10 bills: " << ten << endl;
    cout << "number of 5 bills: " << five << endl;
    cout << "number of 1 bills: " << one << endl;


}