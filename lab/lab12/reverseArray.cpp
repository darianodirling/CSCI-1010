#include <iostream>

using namespace std;

int main()
{
    int numbers[10];
    
    cout << "Enter 10 numbers: ";

    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }

    cout << "The reversed numbers are: ";

    for (int i = 9; i > 0; i--)
    {
        cout << numbers[i] << " ";
    }
    
    

}