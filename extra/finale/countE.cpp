#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    char a[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'E'};

    for (int i = 0; i < 10; i++)
    {
        if(a[i] == 'E')
        {
            sum++;
        }
    }
    cout << sum << endl;

}