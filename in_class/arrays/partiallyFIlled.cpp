#include <iostream>

using namespace std;

int main()
{
    const int MAX = 100;
    int grades[MAX], used = 0;

    int num; 
    cout << "Number of grades ending by -1";
    for(int i = 0; i < MAX; i++)
    {
        cin >> num;
        if(num == -1)
        {
            break;
        }
        grades[i] = num;
        used++;

    }
    for (int i = 0; i < used; i++)
    {
        cout << grades[i] << endl;
    }
}