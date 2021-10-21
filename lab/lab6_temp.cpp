//Darian O'Dirling
//CSCI 1010-002
//lab 6_1
//Find effective tempature
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int T, v, w;

    cout << "Please enter T: ";
    cin >> T;
    cout << "Please enter V: ";
    cin >> v;

    w = 35.74 + 0.6215 * T + (.4275 *T - 35.75) * pow(v,.16);

    cout << w << endl;





}