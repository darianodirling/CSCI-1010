#include <iostream>

using namespace std;

void exchange(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

}
int main()
{
    int num1, num2;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    exchange(num1, num2);
}
