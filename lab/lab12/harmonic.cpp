//Darian O'Dirling
//CSCI 1010-002
//Lab 12_4
//This program prints throught the values of a harmonic sequence

#include <iostream>

using namespace std;

int main()
{
    double harm[20];
    harm[0] = 1;
    harm[1] = 1.5;

    cout << harm[0] << " " << harm[1] << " ";

    for (int i = 2; i < 20; i++)
    {
        harm[i] = harm[i - 1] + 1.0 / (i + 1);
        cout << harm[i - 1] << " ";
    }
    

}