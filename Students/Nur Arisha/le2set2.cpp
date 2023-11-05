#include <iostream>
using namespace std;

int main()
{
    int num, digit, mul;
    int sum = 0;

//user input of integer
    cout << "Enter an integer number: ";
    cin >> num;
 do{
        digit = num % 10; //fnd the remainder
        num = num / 10; //find the remaining integer
        cout << digit << " + ";
        sum += digit;
    }while(num!=0);


    cout << " = " << sum << endl;

    //identify even number
    if(sum%2==0) 
        cout << sum << " is an even number ";
    else
        cout << sum << " is an odd number "; //for odd number

    //identify multiply of 4 and/or 5
    if((sum%4==0) && (sum%5==0))
    {
        cout << "& is a multiples of ";
        cout << "4 and 5";
    }
    else if(sum%5==0)
    {
        cout << "& is a multiples of ";
        cout << "5";
    }
    else if(sum%4==0)
    {
        cout << "& is a multiples of ";
        cout << "4";
    }
    

    return 0;

        
}
