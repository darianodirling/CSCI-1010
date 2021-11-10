//Darian O'Dirling
//CSCI 1010-002
//Lab 11_1
//This program lets the user enter a series of numbers and then get the smallest and largest number
#include <iostream>

using namespace std;

int main()
{
    int i, n, largest = 0, smallest = n;
    cout << "Enter 10 numbers: " << endl;

    //This for loop has two if statements to get the smallest and largest numbers
    for (i = 0; i < 10; i++)
    {
        cin >> n;
        if (n < smallest)
        {
            smallest = n;
        }
        else if (n > largest)
        {
            largest = n;
        }
        
    }
    //print out results
    cout << "largest: " << largest << " smallest: " << smallest << endl;
    
}