#include <iostream>
using namespace std;

//Set1
int main() {
    int number, sum=0;
    cout << "Enter an integer number: ";
    cin >> number;

    int ValueNumber = number;

    while (number != 0){
        int digit = number % 10;
        cout<<digit;
        sum += digit;
        number /= 10;
        if(number!=0)
           cout<<" + "; 
    } 

    cout<<" = "<<sum <<endl;
    
    if (sum%3==0 && sum % 4 == 0 && sum % 5 == 0) {
        cout << sum << " is multiples of 3,4 and 5.";
    }else if( sum % 4 == 0 && sum % 5 == 0){
        cout << sum << " is multiples of both 4 and 5.";
    }else if( sum % 3 == 0 && sum % 5 == 0){
        cout << sum << " is multiples of both 3 and 5.";
    }else if( sum % 3 == 0 && sum % 4 == 0){
        cout << sum << " is multiples of both 3 and 4.";
    }else if( sum % 3 == 0 ){
        cout << sum << " is multiples of 3.";
    }else if( sum % 4 == 0){
        cout << sum << " is multiples of 4.";
    }else if( sum % 5 == 0){
        cout << sum << " is multiples of 5.";
    }else{
        cout<< sum <<" is not multiples of 3, 4, and 5";
    }
    return 0;
}
