//Darian O'Dirling
//CSCI 1010-002
//in class assignment 
//Find total afer tierd discount
#include<iostream>

using namespace std;

int main() {

    int amount;
    
    cout << "What is the amount of money you are using?" << endl;
    cin >> amount;

    if (amount > 100)
        amount = amount - 30;
    else if (amount >= 75)
        amount = amount - 20;
    else if (amount >= 50)
        amount = amount - 10;

    cout << "your total amount after your discount is $" << amount << endl;


}