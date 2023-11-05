#include <iostream>
using namespace std;

int main()
{
    int num, digit, mul;
    int prod = 1;

//user input of integer
    cout << "Enter an integer number: ";
    cin >> num;
 do{
        digit = num % 10; //fnd the remainder
        num = num / 10; //find the remaining integer
        cout << digit << " * ";
        prod *= digit; //find product of digits
    }while(num!=0);

      cout << " = " << prod << endl;


   //identify multiples of 4, 5 and/or 7
    if((prod%4==0) && (prod%5==0) && (prod%7==0))
    {
        cout << prod << " is a multiples of ";
        cout << "4, 5 and 7";
    }
    else if((prod%4==0) && (prod%5==0))
    {
        cout << prod << " is a multiples of ";
        cout << "4 and 5";
    }
    else if((prod%5==0) && (prod%7==0))
    {
        cout << prod << " is a multiples of ";
        cout << "5 and 7";
    }
    else if((prod%4==0) && (prod%7==0))
    {
        cout << prod << " is a multiples of ";
        cout << "4 and 7";
    }
    else if(prod%4==0)
    {
        cout << prod << " is a multiples of ";
        cout << "4";
    }
    else if(prod%5==0)
    {
        cout << prod << " is a multiples of ";
        cout << "5";
    }
    else{
        cout << prod << " is a multiples of ";
        cout << "7";
    }


    return 0;


}
