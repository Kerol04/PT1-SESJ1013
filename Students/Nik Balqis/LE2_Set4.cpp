#include <iostream>
using namespace std;

int main(){
    int num, digit, product=1;

    cout << "Enter an integer number: ";
    cin >> num;

    do {
        digit = num % 10;
        num /= 10;
        cout << digit;
        if (num!=0){
            cout << " * ";
        } 
        product *= digit;
    } while (num != 0);

    cout << " = " << product << endl;
    cout << product;

    if (product % 2 == 0){
        cout << " is even number ";
    } else {
        cout << " is odd number ";
    }

    if (product % 3 == 0){
        cout << "& multiples of 3";
    } 
    
    if (product % 5 == 0){
        if (product % 3 == 0){
            cout << " and 5";
        } else {
            cout << "& multiples of 5";
        }
    }

    return 0;
}