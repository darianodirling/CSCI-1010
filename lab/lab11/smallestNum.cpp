#include <iostream>

using namespace std;

int main()
{
    int i, n, largest = 0, smallest = n;
    cout << "Enter 10 numbers: " << endl;
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
    cout << "largest: " << largest << " smallest: " << smallest << endl;
    
}