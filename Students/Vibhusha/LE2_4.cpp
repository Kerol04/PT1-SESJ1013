#include <iostream>
using namespace std;

//Set4
int main() {
    int number, multiply=1;
    cout << "Enter an integer number: ";
    cin >> number;

    int ValueNumber = number;

    while (number != 0){
        int digit = number % 10;
        cout<<digit;
        multiply = multiply* digit;
        number /= 10;
        if(number!=0)
           cout<<" x "; 
    } 

    cout<<" = "<<multiply <<endl;

    string multiplyValue;
    if(multiply%2==0)
      multiplyValue="even";
    else
      multiplyValue="odd";

    if (multiply % 4 ==0 && multiply % 5 == 0 && multiply % 7 == 0) {
        cout << multiply << " is " <<multiplyValue<<  " & multiples of 4,5 and 7.";
    }else if( multiply % 4 == 0 && multiply % 5 == 0){
        cout << multiply << " is " <<multiplyValue<< " & multiples of both 4 and 5.";
    }else if( multiply % 5  == 0 && multiply % 7 == 0){
        cout << multiply << " is " <<multiplyValue<< " & multiples of both 5 and 7.";
    }else if( multiply % 4 == 0 && multiply % 7 == 0){
        cout << multiply << " is " <<multiplyValue<< " & multiples of both 4 and 7.";
    }else if( multiply % 4 == 0 ){
        cout << multiply << " is " <<multiplyValue<< " & multiples of 4.";
    }else if( multiply % 5 == 0){
        cout << multiply <<" is " <<multiplyValue<< " & multiples of 5.";
    }else if( multiply % 7 == 0){
        cout << multiply <<" is " <<multiplyValue<< " & multiples of 7.";
    }else{
        cout<< multiply <<" is " <<multiplyValue<< " & not multiples of 3, 4, and 5";
    }
    return 0;
}