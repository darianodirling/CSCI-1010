//Darian O'Dirling
//CSCI 1010-002
//assignment 4_3
//This calculates tax based on different brackets

#include<iostream>

using namespace std;

int main(void) 
{
    //get income
    int i;
    double t;
    cout << "Please enter income: " << endl;
    cin >> i;

    //calculate taxes for each income bracket
    if (i <= 750)
    {
        t = i * .01;
    }
    else if (i <= 2250)
    {
        t = (7.5 + ((i % 750) * .02));
    }
    else if (i <= 3750)
    {
        t = 37.5 + ((i % 2250) * .03);
    }
    else if (i <= 5250)
    {
        t = 82.5 + ((i % 3750) * .04);
    }
    else if (i > 5250)
    {
        t = 142.5 + ((i % 5250) * .05);

    }
    //print out tax 
    cout << "The tax due is: " << t << endl;


    
}