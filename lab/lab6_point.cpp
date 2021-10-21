//Darian O'Dirling
//CSCI 1010-002
//lab 6_3
//Find distance of points from origin
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x , y, d;
    cout << "Enter two numbers for a point x and y : " ;
    cin >> x >> y ;

    d = sqrt( pow(x - 0,2) + pow(y - 0,2));

    cout << "The distance of point (" << x << "," << y <<") to the origin point is: " << d << endl;





}