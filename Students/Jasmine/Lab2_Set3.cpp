#include <iostream>
using namespace std;

int main(){
    int integer, digit, product=1;

    cout << "Enter an integer number : ";
    cin >> integer;

    while (integer!=0){
        digit = integer % 10;
        integer /=10;
        cout << digit;
        if (integer !=0){
            cout << " * ";
        }
        product *= digit;
    }

    cout << " = " << product << endl;

    if (product%4==0 && product%5==0 && product%7==0 ){
        cout << product << " is multiples of 4 , 5 and 7";
    }else if (product%4==0 && product%5==0 ){
        cout << product << " is multiples of 4 and 5";
    }else if (product%5==0 && product%7==0 ){
        cout << product << " is multiples of 5 and 7";
    }else if (product%4==0 && product%7==0 ){
        cout << product << " is multiples of 4 and 7";
    }else if (product%4==0){
        cout << product << " is multiples of 4";
    }else if (product%5==0){
        cout << product << " is multiples of 5";
    }else if (product%7==0){
        cout << product << " is multiples of 7";
    }else{
        cout << product << " is not multiples of 4 , 5 and 7";
    }

    return 0;
}