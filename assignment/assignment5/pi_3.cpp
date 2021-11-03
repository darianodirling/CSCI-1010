
//Darian O'Dirling
//CSCI 1010-002
//Assignment 5_3
//This program calculates pi

#include<iostream>

using namespace std;

int main()
{
    int i;
    double answer = 0 , total = 0;

    for (i = 0; i < 99; i++)
    { 
        if(i % 2 == 0)
        {
            answer += 1/(2.0 * i + 1);

        }
        else
        {
            answer -= 1/(2.0 * i + 1);
        }
        
    }
    total = 4 * answer;
    cout << total << endl;
    
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(5);
}

    