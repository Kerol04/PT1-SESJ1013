#include <iostream>
using namespace std;

int main (){
    int integer, digit, sum=0;

    cout << "Enter an integer number : ";
    cin >> integer;

    do{
        digit = integer % 10;
        integer /= 10;
        cout << digit ;
        if(integer!=0){
            cout << " + " ;
        }
        sum += digit; 
    }while (integer!=0);

    cout << " = " << sum << endl;

    if (sum%3==0 && sum%4==0 && sum%5==0 ){
        cout << sum << " is multiples of 3 , 4 and 5";
    }else if (sum%3==0 && sum%4==0 ){
        cout << sum << " is multiples of 3 and 4";
    }else if (sum%4==0 && sum%5==0 ){
        cout << sum << " is multiples of 4 and 5";
    }else if (sum%3==0 && sum%5==0 ){
        cout << sum << " is multiples of 3 and 5";
    }else if (sum%3==0){
        cout << sum << " is multiples of 3";
    }else if (sum%4==0){
        cout << sum << " is multiples of 4";
    }else if (sum%5==0){
        cout << sum << " is multiples of 5";
    }else{
        cout << sum << " is not multiples of 3,4 and 5";
    }

    return 0;
}