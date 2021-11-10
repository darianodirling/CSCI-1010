//Darian O'Dirling
//CSCI 1010-002
//Lab 12_3
//This program lets the user enter a series of numbers and then get the smallest and largest number

#include <iostream>

using namespace std;

int main()
{
    int value[10];
    int countGreater = 0, countLower = 0, sum = 0, mean;

    cout << "Enter 10 values: " ;

    for (int i = 0; i < 10; i++)
    {
        cin >> value[i];
        sum = sum + value[i];
   
    }

    mean = sum / 10;

    for (int i = 0; i < 10; i++)
    {
        if (value[i] > mean)
        {
            countGreater++;
        }
        else if (value[i] < mean)
        {
            countLower++;
        }
        
    }

    cout << "The mean value is " << mean << endl;
    cout << countGreater << " elements are greater than the mean" << endl;
    cout << countLower << " elements are lower than the mean" << endl;
    
    
    

}
