//Darian O'Dirling
//CSCI 1010-002
//Lab 8_5
//This program converts letter grades to phrases

#include<iostream>


using namespace std;

int main(void) 
{
    char grade;
    //get grad
    cout << "Enter a letter grade" << endl;
    cin >> grade;   

    //conver letter grade to phrase
    switch(grade)

    {
    case 'A':
        cout << "Excellent" << endl;
        break;
    case 'B':
        cout << "Good" << endl;
        break;
    case 'C':
        cout << "Average" << endl;
        break;
    case 'D':
        cout << "Poor" << endl;
        break;
    case 'F':
        cout << "Failing" << endl;
        break;
    default:
        cout << "Invaild input" << endl;
        break;
    }
}
