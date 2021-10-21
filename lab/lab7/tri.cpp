//Darian O'Dirling
//CSCI 1010-002
//Lab 7_1
//Tell if there is a triangle
#include<iostream>

using namespace std;

int main(void) 
{
    //Declare variables for angles
    int angle1, angle2, angle3, sum;
    
    //Ask for angles
    cout << "Please Enter 3 values: ";
    cin >> angle1 >> angle2 >> angle3;
    //Calculate Sum
    sum = angle1 + angle2 + angle3;

    //if statements for claculating the values to determine if they are triangles
    if (sum != 180)
    {
        cout << "This is not a Triangle" << endl;


    }
    else
    {
        cout << "This is a Triangle" << endl;
    }
    

}