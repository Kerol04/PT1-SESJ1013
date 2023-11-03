#include <iostream>
using namespace std;

int main(){
    int num, digit, sum=0;
    cout<<"Enter an integer number: ";
    cin>>num;
    
    do{
        digit = num % 10;
        num /= 10;
        cout << digit << " + ";
        sum += digit;
    } while (num!=0);   

    cout << " = " << sum << endl;
    cout << sum << " is multiples of ";

    if (sum % 3 == 0){
        cout<<"3";
    }

    if (sum % 4 == 0){
        if (sum % 3 == 0 && sum % 5 == 0){
            cout<<", 4";
        } else if (sum % 3 != 0){
            cout<<"4";
        } else {
            cout << " and 4";
        }
    }

    if (sum % 5 == 0){
        if (sum % 3 == 0 || sum % 4 == 0){
            cout<<" and 5";
        } else {
            cout<<"5";
        }
    }

    if (sum % 3 != 0 && sum % 4 != 0 && sum % 5 != 0){
        cout<<"neither 3, 4, nor 5";
    }

    return 0;
}