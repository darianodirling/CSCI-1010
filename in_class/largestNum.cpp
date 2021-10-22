#include <iostream>

using namespace std;

int main()
{
    int num, largest ;
    cout << "Enter Numbers\n";
    cin >> num;
    largest = num;

    while(num != 0)
    {
       
        if(num > largest) //compare first
        {
            largest = num;
        } cin >> num; //enter new numbers
            

    }

    cout << "Largest: " << largest << endl;


}