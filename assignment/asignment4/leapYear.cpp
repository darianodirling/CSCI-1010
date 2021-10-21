//Darian O'Dirling
//CSCI 1010-002
//Lab 8_4
//This program tells weather a year is leap year or not

#include<iostream>


using namespace std;

int main(void) 
{
    int year;

    cout << "Enter year: " << endl;
    cin >> year;

    if ((year % 4) != 0)
    {
        cout << "It's a common year" << endl;
    }
    else if ((year % 100) != 0)
    {
        cout << "It's a leap year" << endl;
    }
    else if ((year % 400) != 0)
    {
        cout << "It's a common year" << endl;
    }
    else
    {
        cout << "It's a leap year" << endl;
    }
    

}