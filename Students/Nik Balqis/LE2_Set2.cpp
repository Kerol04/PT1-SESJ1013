#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter an integer number: ";
    cin>>num;
    
    int sum=0,originalNum=num;
    bool firstDigit = true;

    do{
        int digit = num % 10;
        sum += digit;
        num /= 10;

        if (!firstDigit){
            cout<<" + ";
        } else {
            firstDigit = false;
        }
        cout << digit;
    } while (num!=0);   

    cout << " = " << sum << endl;
    
    if (sum % 2 == 0){
        cout<<sum<<" is even number";
        } else {
        cout<<sum<<" is odd number";
        }

    if (sum % 4 == 0){
        cout << " & multiples of 4";
    }

    if (sum % 5 == 0){
        if (sum % 4 == 0){
            cout << " and 5";
        } else {
            cout << " & multiples of 5";
        }
    }

    return 0;
}