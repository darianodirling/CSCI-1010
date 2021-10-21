#include<iostream>
using namespace std;

int main()
{
    char choice;
    int num;
    double total = 0.0;
    double cheeseBurger = 5.99; 
    double espresso = 3.99;
    double cheeseStick = 4.99;
    double cbCount = 0;
    double cbTotal = 0;
    double eCount = 0;
    double eTotal = 0;
    double sTotal = 0;
    double sCount = 0;

    cout << "****Ecu Cafe****" << endl;

    cout << "1.) CheeseBurger $5.99" << endl;
    cout << "2.) Espresso $3.99" << endl;
    cout << "3.) Cheese Stick $ 4.99" << endl;

    while (true)
    {
    cout << "Enter id number (C for checkout)" << endl;
    cin >> choice; 

        if (choice == '1')
        {
            cout << "Enter the number of the item" << endl;
            cin >> cbCount;
            cbTotal = cbCount * cheeseBurger;

        }
        else if (choice == '2')
        {
            cout << "Enter the number of the item" << endl;
            cin >> eCount;
            eTotal = eCount * espresso;
        }
        else if (choice == '3')
        {
            cout << "Enter the number of the item" << endl;
            cin >> sCount;
            sTotal = sCount * cheeseStick;
        }
        else if (choice == 'C' || choice == 'c')
        {
            total = sTotal + eTotal + cbTotal;
            cout << "Your total is $" << total << endl;
        }
    }


} 
        
    
-
    
    
