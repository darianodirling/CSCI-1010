//Darian O'Dirling
//CSCI 1010-002
//Lab 9_1
//This program use the least amount of weights to balance a scale

#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    int w;
    int weightSixteen = 0;
    int weightEight = 0;
    int weightFour = 0;
    int weightTwo = 0;
    int weightOne = 0;

    cout << "Please enter a weight" << endl;
    cin >> w;

    //uses the maximum amount of the heaviest weights first
    while (w >= 16)
    {
        weightSixteen = w / 16;
        w = w % 16;    
    }
    while (w >= 8)
    {
        weightEight = w / 8;
        w = w % 8; 
    }
    while (w >= 4)
    {
        weightFour = w / 4;
        w = w % 4; 
    }
    while (w >= 2)
    {
        weightTwo = w / 2;
        w = w % 2; 
    }
    while (w >= 1)=
    {
        weightOne = w / 1; 
    }

    //print out value of all weights
    cout << weightSixteen << " 16-ounce weights" << endl;
    cout << weightEight << " 8-ounce weights"<< endl;
    cout << weightFour << " 4-ounce weights"<< endl;
    cout << weightTwo << " 2-ounce weights"<< endl;
    cout << weightOne << " 1-ounce weights"<< endl;
    
}