//Darian O'Dirling
//CSCI 1010-002
//assignment 4_1
//Program allows tells the user weather a letter is a vowel or not

#include <iostream>

using namespace std;

int main()
{
    //obtain character that is a letter
    char letter;
    cout << "Please enter a lower case character" << endl;
    cin >> letter;

    //a switch statment that checks for each vowel
    switch (letter)
    {
    case 'a':
        cout << letter << " is a vowel" << endl;
        break;
    case 'e':
        cout << letter << " is a vowel" << endl;
        break;
    case 'i':
        cout << letter << " is a vowel" << endl;
        break;
    case 'o':
        cout << letter << " is a vowel" << endl;
        break;
    case 'u':
        cout << letter << " is a vowel" << endl;
        break;
    
    default:
    cout << letter << " is not a vowel" << endl;
        break;
    }


    return 0;
}

