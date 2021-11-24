#include <iostream>

using namespace std;

int area(double radius) {

    double area;
    cout << "Input Radius: " ;
    cin >> radius ;

    area = 3.14 * radius * radius;

    return area;
}

int main()
{
    double r; 
    double area;
    cout << "Enter radius:";
    cin >> r;
    area(r);
    cout << "The area is : " << area << endl;
    return 0;

}
