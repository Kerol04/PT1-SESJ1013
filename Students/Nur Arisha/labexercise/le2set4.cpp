#include <iostream>
using namespace std;

int main()
{
    int num, digit, mul;
    int prod = 1;

//user input of integer
    cout << "Enter an integer number: ";
    cin >> num;

//post-test loop
 do{
        digit = num % 10; //fnd the remainder
        num = num / 10; //find the remaining integer
        cout << digit;
        if(num>0)
        cout << " * ";
        prod *= digit; //find product of digits
    }while(num!=0);  

      cout << " = " << prod << endl;

      //identify even number
    if(prod%2==0)
        cout << prod << " is an even number ";
    else
        cout << prod << " is an odd number ";


   //identify multiples of 3 and/or 5
    if((prod%3==0) && (prod%5==0))
    {
        cout << "& is a multiples of ";
        cout << "3 and 5";
    }
    else if(prod%3==0)
    {
        cout << "& is a multiples of ";
        cout << "3";
    }
    else if(prod%5==0)
    {
        cout << "& is a multiples of ";
        cout << "5";
    }



    return 0;

        
}
