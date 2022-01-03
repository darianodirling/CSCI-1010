#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


void random(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 71 + 10;
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
   int arr[10];
   random(arr, 10);
   
}