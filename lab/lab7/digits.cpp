//Darian O'Dirling
//CSCI 1010-002
//lab7_2
//Calulate how many digits are contained in input
#include<iostream>

using namespace std;

int main(void) 
{
    //Declare Variables
    int input;

    //Prompt User for input
    cout << "Enter a number, no more than 4" << endl;
    cin >> input;

    //Get the number of digits
    if (input / 1000 > 0 || input / 1000 <= 9.99)
    {
        cout << "4 digits" << endl;
    }
    else if (input / 100 > 0)
    {
        cout << "3 digits" << endl;
    }
    else if (input / 10 > 0)
    {
        cout << "2 digits" << endl;
    }
    else if (input / 1 > 0)
    {
        cout << "1 digits" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }



}