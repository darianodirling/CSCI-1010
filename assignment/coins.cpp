#include <iostream>

using namespace std;

int main()
{
    int quarters, dimes, nickles, total ;

    cout << "Number of quarters: " ;
    cin >> quarters;

    cout << "Number of dimes: " ;
    cin >> dimes;

    cout << "Number of nickles: " ;
    cin >> nickles;

    total = quarters * 25 + dimes * 10 + nickles * 5 ;

    cout << "There are " << total << " cents in total.\n";



}