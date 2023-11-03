#include <iostream>
using namespace std;

int main (){
    int integer, digit, product=1;

    cout << "Enter an integer number : ";
    cin >> integer;

    do{
        digit = integer % 10;
        integer /=10;
        cout << digit;
        if (integer !=0){
            cout << " * ";
        }
        product *= digit;
    }while (integer!=0);

    cout << " = " << product << endl;

    if(product%2==0){
        cout << product  << " is even number";
    }else{
        cout << product << " is odd number";
    }

    if (product%3==0 && product%5==0){
        cout << " & multiples of 3 and 5";
    }else if (product%3==0){
        cout << " & multiples of 3";
    }else if (product%5==0){
        cout << " & multiples of 5";
    }

    return 0;
}