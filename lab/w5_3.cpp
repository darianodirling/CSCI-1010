#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double hours, overtime, gross, socialSec, fedTax, stateTax, dues, net,
    
    pay = 16.78;
    
    cout << "Enter hours worked: ";
    cin >> hours;
    
    overtime = hours - 40;
    
    gross = (40 * pay) + (overtime *(1.5 * pay));
    socialSec = gross * 0.06;
    fedTax = gross * 0.14;
    stateTax = gross * 0.05;
    dues = 10;

    net = gross - socialSec - fedTax - stateTax - dues;

    cout << "Gross Pay: " << gross << endl;
    cout << "Social Security: " << socialSec << endl;
    cout << "Federal Income Tax: " << fedTax << endl;
    cout << "State Income Tax: " << stateTax << endl;
    cout << "Union Dues: " << dues << endl;
    cout << "Net: " << net << endl;










}