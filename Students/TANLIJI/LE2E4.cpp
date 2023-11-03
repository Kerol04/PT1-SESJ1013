#include <iostream>
using namespace std;

int main(){
    int num;
    int mul = 1;
    int digit;
    cout<<"Enter an integer number: ";
    cin>>num;
    for(int n=0;num>0;n++){
        if (n>0){
            cout<< digit <<" * ";
        }
        digit = num%10;
        mul= mul* digit;
        num/=10;
        if (num%10==0){
        cout << digit ;
        }
    }
    cout<<" = " <<mul<<endl;
    if(mul%2==0 && mul%3==0 && mul%5==0){
        cout<<mul << " is even number & multiples of 3 and 5";
    }
    else if(mul%2!=0 && mul%3==0 && mul%5==0){
        cout<<mul << " is odd number & multiples of 3 and 5";
    }
    else if (mul%3==0 && mul%5==0){
        cout<<mul << " is multiples of 3 and 5";
    }
    else if (mul%2==0 && mul%3==0){
        cout<<mul << " is even number & multiples of 3";
    }
    else if (mul%2==0 && mul%5==0){
        cout<<mul << " is an even number & multiples of 5";
    }
    else if(mul%3==0 && mul%2!=0){
        cout<<mul << " is odd number & multiples of 3";
    }
    else if(mul%5==0 && mul%2!=0){
        cout<<mul << " is odd number & multiples of 5";
    }
    else if (mul%2!=0){
        cout<<mul << " is odd number";
    }
    else if (mul%2==0){
        cout<<mul << " is even number" ;
    }

    
    return 0;

}