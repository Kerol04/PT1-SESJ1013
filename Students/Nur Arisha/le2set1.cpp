#include <iostream>
using namespace std;

int main()
{
    int num, digit, mul;
    int sum = 0;

    cout << "Enter an integer number: ";
    cin >> num;
 do{
        digit = num % 10;
        num = num / 10;
        cout << digit << " + ";
        sum += digit;
    }while(num!=0);

    cout << " = " << sum << endl;

    if(sum%3==0)
        cout << sum << " is a multiply of 3";
    if(sum%4==0)
        cout <<" and 4";
    if(sum%5==0)
        cout <<" and 5";

    return 0;
   

}