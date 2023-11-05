#include <iostream>
using namespace std;

int main()
{
    int num, digit, mul;
    int sum = 0;

//user input
    cout << "Enter an integer number: ";
    cin >> num;
 do{
        digit = num % 10; //find remainder
        num = num / 10; //use division to find the remaining number
        cout << digit << " + ";
        sum += digit;
    }while(num!=0);

    cout << " = " << sum << endl;

//identify multiples of 3, 4 and/or 5
    if((sum%4==0) && (sum%5==0) && (sum%3==0))
    {
        cout << sum << " is a multiples of ";
        cout << "3, 4 and 5";
    }
    else if((sum%3==0) && (sum%4==0))
    {
        cout << sum << " is a multiples of ";
        cout << "3 and 4";
    }
    else if((sum%4==0) && (sum%5==0))
    {
        cout << sum << " is a multiples of ";
        cout << "4 and 5";
    }
    else if((sum%3==0) && (sum%5==0))
    {
        cout << sum << " is a multiples of ";
        cout << "3 and 5";
    }
     else if(sum%3==0)
    {
        cout << sum << " is a multiples of ";
        cout << "3";
    }
    else if(sum%4==0)
    {
        cout << sum << " is a multiples of ";
        cout << "4";
    }
    else{
        cout << sum << " is a multiples of ";
        cout << "5";
    }

    return 0;
}