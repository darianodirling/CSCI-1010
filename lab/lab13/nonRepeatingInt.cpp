#include <iostream>

using namespace std;

void bubbleSort(int a[], int used)
{
    int i, j;
    for (i = 0; i < used; i++)
    {
        
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

void display(int a[], int size)
{
    cout << "In the array: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    
}
int singleNumber(int a[], int size)
{
    
    int singleNum = 0;
    for (int i = 0; i < size; i++)
    {
        int flag = 0;
        for (int j = 0; j < size; j++)
        {
            if (a[i] == a[j])
            {
                flag++;

            }
              
        }
        if (flag == 0)
        {
            singleNum = a[i] + 1;
        }
           
    }
    cout << "The single number is: " << singleNum << endl;
    return 0;
}

int main()
{
    int a1[3] = {2, 2, 1};
    int a2[5] = {4, 1, 2, 1, 2};
    int a3[7] = {7, 3, 3, 9, 7, 9, 1};

    display(a1, 3);
    bubbleSort(a1, 3);
    singleNumber(a1, 3);
    cout << "\n";

    display(a2, 5);
    bubbleSort(a2, 5);
    singleNumber(a2, 5);
    cout << "\n";

    display(a3, 7);
    bubbleSort(a3, 7);
    singleNumber(a3, 7);
    cout << "\n";




}