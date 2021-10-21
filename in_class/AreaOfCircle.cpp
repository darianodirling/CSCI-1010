#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double radius, area;
    
    cout << "Input Radius: " ;
    cin >> radius ;

    area = 3.14 * radius * radius;

    cout << "The Area of the circle is : "<< area << endl;


    return 0;

}