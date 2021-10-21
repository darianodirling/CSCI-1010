//werite a program to sum up 1 + 1/3 + 1/5 +... 1/n
#include<iostream>
using namespace std;


int main()
{
    int n;
    double i = 1; //controls loop
    int sum = 0; //
    int d = 0;

    cout << "please enter a positive integer: " << endl;
    cin >> n;
    while(i <= n)
    {
        sum = sum + (1 / i) ;
        i += 2;
    }
    cout << sum << endl;

    return 0;
}