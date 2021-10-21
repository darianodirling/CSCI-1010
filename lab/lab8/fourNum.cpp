//Darian O'Dirling
//CSCI 1010-002
//Lab 8_2
//This program converts numbers into writen form

#include<iostream>


using namespace std;

int main(void) 
{
    int a,b,c,d;

    //get four numbers
    cout << "Please enter four integers" << endl;
    cin >> a >> b >> c >> d;

    //compare numbers to find largest
    if (a > b && a > c && a > d)
    {
        cout << "The largest is: " << a << endl;
    }
    else if (b > a && b > c && b > d)
    {
        cout << "The largest is: " << b << endl;
    }
    else if (c > a && c > b && c > d)
    {
        cout << "The largest is: " << c << endl;
    }
    else
    {
        cout << "The largest is: " << d << endl;
    }
    //compare numbers to find smallest
     if (a < b && a < c && a < d)
    {
        cout << "The smallest is: " << a << endl;
    }
    else if (b < a && b < c && b < d)
    {
        cout << "The smallest is: " << b << endl;
    }
    else if (c < a && c < b && c < d)
    {
        cout << "The smallest is: " << c << endl;
    }
    else
    {
        cout << "The smallest is: " << d << endl;
    }
}
    