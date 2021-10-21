//Darian O'Dirling
//CSCI 1010-002
//Lab 8_2
//This program converts numbers into writen form

#include<iostream>

using namespace std;

int main(void) 
{
    //get two integers
    char a,b;

    cout << "enter a two digit number (>= 20) : " << endl;
    cin >> a >> b;

    //get word form in tens place
    switch (a)
    {
    case '2':
        cout << "twenty-";
        break;
    case '3':
        cout << "thirty-";
        break;
    case '4':
        cout << "fourty-";
        break;
    case '5':
        cout << "fifty-";
        break;
    case '6':
        cout << "sixty-";
        break;
    case '7':
        cout << "seventy-";
        break;
    case '8':
        cout << "eighty-";
        break;
    case '9': 
        cout << "ninety-";
        break;
    
    default:
        cout << "invalid input";
        break;
    }
    //get word form of number in ones place
    switch (b)
    {
    case '1': 
        cout << "one"<< endl;
        break;
    case '2':
        cout << "two"<< endl;
        break;
    case '3':
        cout << "three"<< endl;
        break;
    case '4':
        cout << "four"<< endl;
        break;
    case '5':
        cout << "five"<< endl;
        break;
    case '6':
        cout << "six"<< endl;
        break;
    case '7':
        cout << "seven"<< endl;
        break;
    case '8':
        cout << "eight"<< endl;
        break;
    case '9': 
        cout << "nine"<< endl;
        break;
    
    default:
        break;
    
    }

}
