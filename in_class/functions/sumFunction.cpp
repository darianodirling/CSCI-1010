#include <iostream>

using namespace std;

void sum(int a[], int used)
{
    int sum = 0;
    for (int i = 0; i < used; i++)
    {
        sum = a[i] + sum;
    }
    cout << sum << endl;

}

int main()
{
    int a[10] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55} ;
    int used = 10;

    //sum(int a[], int used);
    sum(a, 10);

    
     
}