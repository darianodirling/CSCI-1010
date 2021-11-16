#include <iostream>

using namespace std;

int main()
{
    int a[5] = {32, 23, 52, 17, 34};
    const int len = 5;

    for (int i = 0; i < len; i ++)
    {
        for (int j = 0; j < len - 1; i++)
        {
            if (a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << ", " ;
    }
    
}

f