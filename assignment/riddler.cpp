#include<iostream>

using namespace std;

int main() 
{
    int i = 1000, thousands, tens, hundreds, ones, sum;

    while (i < 9999)
    {
        
        i= i + 1;
        thousands = i / 1000;
        hundreds = (i % 1000) / 100;
        tens = (i % 100) / 10;
        ones = i % 10;
        sum = 0;
        sum = thousands + hundreds + tens + ones;
        bool a = false , b = false, c = false, d = false;
        //test 
        //cout << i << " ones " << ones << " tens " << tens << " hundreds " << hundreds << " thousands " << thousands << endl;
        
        if (thousands == tens * 3 )
        {
            b = true;
            
        }
        if (sum == 27)
        {

            c = true;
            
        }
        if (i % 2 != 0)
        {
            d = true;
            
        }
        if(b == true && c == true && d == true)
        {
            cout << i << endl;
        }

        
    }
   
    

    
}
