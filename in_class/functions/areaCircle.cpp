#include <iostream>

using namespace std;

int largest(double radius, double radius, double area) {
    
    cout << "Input Radius: " ;
    cin >> radius ;

    area = 3.14 * radius * radius;

    return area;
}

int main()
{
    cout << "Enter three integers:";
    cin >> a1 >> a2 >> a3;
    cout << "The largest is " << largest(a1, a2, a3) << endl;
    return 0;

}
