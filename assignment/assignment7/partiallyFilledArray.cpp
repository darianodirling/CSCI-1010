//Darian O'Dirling
//CSCI 1010-002
//Assignment 7
//This program shows the programmers ability to deal with partially filled arrays, bubbleSort and functions

#include <iostream>

using namespace std;

void display(int a[], int used)
{
    for (int i = 0; i < used; i++)
    {
        if (a[i] == -1)
        {
            break;
        }
        else
        {
            cout << a[i] << " " ;
        }
    }

}

void bubbleSort(int a[], int used)
{
    int i, j;
    for (i = 0; i < used; i++)
    {
            // Last i elements are already in place
        for (j = 0; j < used-i-1; j++)
        {
            if(a[j] < a[j+1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

            }
        }

    }   
}    
     
int main()
{
    const int MAX = 100; 
    int a[MAX], n, used = 0;

    //collect numbers and put them in the array
    cout << "Enter some numbers ended by -1: " ;
    for (int i = 0; i < MAX; i++)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        else
        {
            a[i] = n;
        }
        used ++;
        
    }
    //print out array
    cout << "The current elements are: " << endl;
    display(a, used);
    cout << endl;

    //add elements to array
    a[used] = 10;
    used ++;
    a[used] = 15;
    used ++;
    
    //display current elements with 10 and 15 added on
    cout << "Now the element are: " << endl;
    display(a, used);
    cout << endl;


    //sort
    bubbleSort(a, used);
    //dispay largest
    cout << "The largest number is: " << a[0] << endl;

    cout << "After sorting the elements are: ";
    display(a, used);


        
    


}