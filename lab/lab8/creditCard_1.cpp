//Darian O'Dirling
//CSCI 1010-002
//Lab 8_1
//This calculates payments on a credit card balence

#include<iostream>
#include<math.h>

using namespace std;

int main(void) 
{
    double balance, intrest, total, minPayment;
    //get account balence
    cout << "Please enter the account balence:" << endl;
    cin >> balance;

    //calculate intrest
    if (balance > 1000)
    {
        intrest = (.015 * 1000) + (balance - 1000) * .01;
    }
    else if (balance <= 1000)
    {
        intrest = .015 * balance;
    }
    cout << "The intrest due is $ " << intrest << endl;

    //calculate total double
    total = intrest + balance;

    cout << "The total amount due is $ " << total << endl;

    //calculate minimum payments
    minPayment = .1 * total;

    if (minPayment <= 10)
    {
        cout << "The minimum payment is $ 10" <<  endl;
    }
    else
    {
        cout << "The minimum payment is $ " << minPayment << endl;
    }
    
    

    

}