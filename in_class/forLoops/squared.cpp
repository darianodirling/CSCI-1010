// 1^2 + 2^2 + ...20^2

#include<iostream>
using namespace std;

int main()
{
    int i, sum = 0;


    for (i = 0; i < 20; i++)
    {
        sum += (i * i);
    }
    cout << "Sum " << sum << endl;
}