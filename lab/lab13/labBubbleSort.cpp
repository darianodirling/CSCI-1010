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
        cout << a[i] << " " ; 
    }
    cout << endl;

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
    const int MAX = 8; 
    int a[MAX], n, used = 0;

    //collect 8 numbers and put them in the array
    cout << "Enter 8 numbers: " ;
    for (int i = 0; i < MAX; i++)
    {
        cin >> n;
    
        a[i] = n;
        
        used ++;
        
    }
    //print out array
    cout << "The current elements are: " << endl;
    display(a, used);
    cout << endl;

    //add elements to array
    int temp = a[0];
    for(int i = used + 1; i >= 0; i--)
    {
        a[i] = a[i - 1];
    }
    used ++;
    a[used] = temp;
    a[0] = 18;

    
    cout << "After inserting 18 as the first element the element are: " << endl;
    display(a, used);
    cout << endl;


    //sort
    bubbleSort(a, used);
    //dispay largest
    cout << "The largest number is: " << a[0] << endl;

    cout << "After sorting the elements in decending order are: ";
    display(a, used);


        
    


}