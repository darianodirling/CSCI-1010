#include<iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    int sum = 0;

    cout << "please enter a positive integer: " << endl;
    cin >> n;
    while(i <= n){
        
        sum = sum + i;
        i = i + 1;

    }
    cout << sum << endl;

    return 0;
}
