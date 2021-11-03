#include<iostream>
using namespace std;

int main()
{
    char choice;
    int num;
    double total = 0.0;
    double canes = 5.99; 
    double panda = 6.99;
    double bagel = 4.99;
    double cCount = 0;
    double cTotal = 0;
    double pCount = 0;
    double pTotal = 0;
    double bCount = 0;
    double bTotal = 0;
    while (true)
    {
    //Menu
    cout << "****Ecu Cafe****" << endl;

    cout << "1.) Canes Tender Combo $5.99" << endl;
    cout << "2.) Panda Bowl $6.99" << endl;
    cout << "3.) Eienstein Bagel $ 4.99" << endl;

        while (true) {
        cout << "Enter id number (C for checkout)" << endl;
        cin >> choice; 
       
            //Choices made by customer that then updates the total cost 
            if (choice == '1')
            {
                cout << "Enter the number of the item" << endl;
                cin >> cCount;
                cTotal = cCount * canes;

            }
            else if (choice == '2')
            {
                cout << "Enter the number of the item" << endl;
                cin >> pCount;
                pTotal = pCount * panda;
            }
            else if (choice == '3')
            {
                cout << "Enter the number of the item" << endl;
                cin >> bCount;
                bTotal = bCount * bagel;
            }
            //Checkout and give customer total cost
            else if (choice == 'C' || choice == 'c')
            {
                total = bTotal + pTotal + cTotal;
                cout << "Your total is $" << total << endl;
                cout << "Thankyou!" << endl;
                break;
            }
        }
        
    }

} 
        
    

    
    
