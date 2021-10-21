#include<iostream>
#include<string>

using namespace std;

int main()
{
    string bracket;
    cout << "Input s = ";
    cin >> bracket;

    int l = bracket.length();
    int j = l-1;
    char a = bracket[0];
    char b = bracket[j];

    if (a == '('  && b == ')' )
    {
        cout << "Output: true" << endl;
    }
    else if (a == '[' && b == ']' )
    {
        cout << "Output: true" << endl;
    }
     else if (a == '{' && b == '}' )
    {
        cout << "Output: true" << endl;
    }
    else
    {
        cout << "Output: false" << endl;
    }
    


    

}
