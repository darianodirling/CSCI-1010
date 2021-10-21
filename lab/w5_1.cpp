#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double radius, height, volume;
    
    cout << "Input Radius: " ;
    cin >> radius ;

    cout << "Input Height: " ;
    cin >> height ;

    //h*pie*r^2
    volume = height * 3.1415 * (radius * radius);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);

    cout << "The Volume of a circle is : "<< volume << endl;


    return 0;

}