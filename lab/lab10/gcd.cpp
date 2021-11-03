//Darian O'Dirling
//CSCI 1010-002
//Lab 10_2
//This program lets the user enter a series of numbers and then get greatest common factor
#include <iostream>

using namespace std;

int main()

{
    int n, m, remainder;
    
    //Get two numbers
    cout << "Enter two numbers: " << endl;
    cin >> n >> m;

    //loop math for gcd until n == 0
    while(true)
    {
        if (n  == 0) 
        {
            cout << "GCD: " << m << endl;
            break;
        }
      
        else
        {
            //reassign variables
            remainder = m % n;
            m = n;
            n = remainder;

        }

    }
    

}