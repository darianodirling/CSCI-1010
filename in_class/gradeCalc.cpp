//Darian O'Dirling
//CSCI 1010-002
//in class assignment 
//Find grade based on numberical score
#include<iostream>

using namespace std;

int main(void) 
{
    int score;
    string grade;

    cout << "what is your score?";
    cin >> score;

    if (score >= 90)
    {
        grade = "A";
    }
    else if (score >= 80)
    {
        grade = "B";
    }
    else if (score >= 70)
    {
        grade = "C";
    }
    else if (score >= 60)
    {
        grade = "D";
    }
    else
    {
        grade = "F";
    }

    cout << "Your grade is a " << grade << endl;
    
}
