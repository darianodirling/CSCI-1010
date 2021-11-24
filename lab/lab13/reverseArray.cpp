#include <iostream>

using namespace std;

void display(int a[], int used)
{
    for (int i = 0; i < used; i++)
    {
        cout << a[i] << " " ; 
    }
    cout << endl;

}

int main()=
{
    int a[10] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55} ;

    int i, j;
    for (i = 0; i < 10; i++)
    {
        
        for (j = 0; j < 10-i-1; j++)
        {
            int temp;
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;

        }

    }
    cout << "The reverse elements are: " << endl;
    display(a, 10);   
}