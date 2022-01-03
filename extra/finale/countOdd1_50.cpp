#include <iostream>

using namespace std;

int main()
{
    int i = 0, sum = 0;
    while (i < 50)
    {
        if (i % 2 != 0)
        {
            sum++;
        }
        i++;
         
    }
    cout << sum << endl;
    

}