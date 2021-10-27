
//Darian O'Dirling
//CSCI 1010-002
//Lab 10_1 
//This program lets the user enter a series of numbers and then get the square root or that number squared
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char choice;
    int a, b;
    int answer;
    while (true)
    {
    //Menu
    cout << "**** Scientific Calculator ****" << endl;

    cout << "1.) Squared" << endl;
    cout << "2.) Square Root" << endl;
    cout << "3.) Exit " << endl;

        while (true) {
        
        cin >> choice; 
       
            //Choices made by user give it an operator 
            if (choice == '1')
            {
                //squared
                cout << "Please enter a number" << endl;
                cin >> a;
                answer = a * a;
                cout << a << " ^ 2 = " << answer << endl;
                break;

            }
            else if (choice == '2')
            {
                //square root
                cout << "Please enter a number" << endl;
                cin >> a;
                answer = sqrt(a);
                cout << "The square root of " << a << " is " << answer << endl; 
                break;
                
            }
            else if (choice == '3')
            {
                //exit
                break;
            }
            else
            {
                cout << "enter a vaid input" << endl;
            }
            }
        }
        
    }
