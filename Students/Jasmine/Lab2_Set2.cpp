#include <iostream>
using namespace std;

int main (){
    int integer, digit, sum =0;

    cout << "Enter an integer number : ";
    cin >> integer;

    while (integer!=0){
        digit = integer % 10;
        integer /= 10;
        cout << digit ;
        if(integer!=0){
            cout << " + " ;
        }
        sum += digit; 
    }
    
    cout << " = " << sum << endl;
    cout << sum << " is ";

    if (sum%2==0){
        cout << "even";
    }else{
        cout << "odd";
    }

    if (sum%4==0 && sum%5==0){
        cout << " & multiples of 4 and 5";
    }else if (sum%4==0){
        cout << " & multiples of 4";
    }else if (sum%5==0){
        cout << " & multiples of 5";
    }
   
    return 0;
}