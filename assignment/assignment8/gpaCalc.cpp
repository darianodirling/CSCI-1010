#include <iostream>

using namespace std;

double compute(char student[], int size)
{
    double compute = 0.0;
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        switch (student[i])
        {
        case 'A':
            sum = sum + 4;
            break;
        case 'B':
            sum = sum + 3;
            break;
        case 'C':
            sum = sum + 2;
            break;
        case 'D':
            sum = sum + 1;
            break;
        case 'F':
            sum = sum + 0;
            break;
        
        default:
            break;
        }


        
    }
    
    compute = sum / size;
    cout << compute << endl; 
    
    return compute;


}

int main()
{
    double gpa = 0.0;
    char studentA[8] = {'A', 'A', 'B', 'A', 'D', 'C', 'A', 'A'}; 
    int sizeA = 8;
    char studentB[12] = {'B', 'B', 'D','F', 'A', 'A', 'B', 'A', 'A', 'D', 'A', 'B'};
    int sizeB = 12;

    cout << "Stuent A's GPA is: ";
    compute(studentA, sizeA);

    cout << "Stuent B's GPA is: ";
    compute(studentB, sizeB);
    



    return 0;

}
    