#include <iostream>

using namespace std;

void exchange(int a[], int i, int j)
{
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;

}
int main()
{
    int a[10] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55} ;
    int num1, num2;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    exchange(a, num1, num2);
    cout << a[3] << " "<< a[4];
}
