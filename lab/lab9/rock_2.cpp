//Darian O'Dirling
//CSCI 1010-002
//Lab 9_2
//This program plays rock paper sissors 

#include<iostream>
using namespace std;

int main()
{
    char player1, player2;

    //has users input choice
    cout << "player 1, please show your choice: " << endl;
    cin >> player1;
    cout << "player 2, please show your choice: " << endl;
    cin >> player2;

    //3 nested if statements compare each of the possiblilies in with r, p, s
    if (player1 == 'r' || player1 == 'R')
    {
        if (player2 == 'r' || player2 == 'R')
        {
            cout << "Nobody wins!" << endl;
        }
        else if (player2 == 'p' || player2 == 'P')
        {
            cout << "Player 2 wins!" << endl;
        }
        else if (player2 == 's' || player2 == 'S')
        {
            cout << "Player 1 wins!" << endl;
        }
    }
    if (player1 == 'p' || player1 == 'P')
    {
        if (player2 == 'r' || player2 == 'r')
        {
            cout << "Player 1 wins!" << endl;
        }
        else if (player2 == 's' || player2 == 'S')
        {
            cout << "Player 2 wins!" << endl;
        }
        else if (player2 == 'p' || player2 == 'P')
        {
            cout << "Nobody wins!" << endl;
        }
    }
    if (player1 == 's' || player1 == 'S')
    {
        if (player2 == 'r' || player2 == 'r')
        {
            cout << "Player 2 wins!" << endl;
        }
        else if (player2 == 'p' || player2 == 'P')
        {
            cout << "Player 1 wins!" << endl;
        }
        else if (player2 == 's' || player2 == 'S')
        {
            cout << "Nobody wins!" << endl;
        }
    }
    else
    {
        cout << "Enter input of r,p,s" << endl;
    }
    
}

