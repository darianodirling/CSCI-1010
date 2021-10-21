#include <iostream>

using namespace std;

int main()
{
    double bill, people, tip, tipPercent;

    cout << "Enter total bill " << endl;
    cin >> bill;

    cout << "How many people are there? " << endl;
    cin >> people;

    cout << "what percent do you want to tip: " << endl;
    cin >> tipPercent;
    tipPercent = tipPercent * .01;

    tip = (bill * tipPercent) / people;

    cout << "you should each tip: " << tip << endl;


}