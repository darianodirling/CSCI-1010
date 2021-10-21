#include <iostream>

using namespace std;

int main()
{
    int seconds, hours, minutes, secondsRemaining;
    cout << "Enter a time in seconds: " << endl;
    cin >> seconds;
    hours = seconds / 3600;
    minutes = seconds % 3600;

    minutes = minutes / 60;

    secondsRemaining = seconds % 60;

    cout << "The time is " << hours << " hours, " << minutes << " minutes, " << secondsRemaining << " and seconds" << endl;

   
    
} 