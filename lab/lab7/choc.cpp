//Darian O'Dirling
//CSCI 1010-002
//lab7_3
//Calulate how many chocolate bars someone can have to maintain there weight
#include<iostream>
#include<string>

using namespace std;

int main(void) 
{
    double weight, height, age, BMR, CB;
    string gender;

    //Get gender
    cout << "Enter M for male F for female: " << endl;
    cin >> gender;

    //Get weight, height and age
    cout << "Please enter weight, height and age: " << endl;
    cin >> weight >> height >> age;

    //Apply appropriate math to get BMR and CB values
    if (gender == "M" || gender == "m")
    {
        BMR = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
           
    }
    if (gender == "F" || gender == "f")
    {
        BMR = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);   
     
    }
    //Output how many chocolate bars an individual can have to maintain body weight
    CB = BMR / 230;
    std::cout.precision(2);
    cout << "You can eat " << CB << " chocolate bars" << endl;
}