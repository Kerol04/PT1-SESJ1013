#include <iostream>
using namespace std;

int main(){
    int num;
    int mul=1;
    int digit;
    cout<<"Enter an integer number: ";
    cin>>num;
    for(int n=0;num>0;n++){
        if (n>0){
            cout<< digit <<" * ";
        }
        digit = num%10;
        mul = mul* digit;
        num/=10;
        if (num%10==0){
        cout << digit ;
        }
    }
    cout<<" = " <<mul<<endl;
    if(mul%4==0 && mul%5==0 && mul%7==0){
        cout<<mul << " is multiples of 4,5 and 7";
    }
    else if (mul%4==0 && mul%5==0){
        cout<<mul << " is multiples of 4 and 5";
    }
    else if (mul%4==0 && mul%7==0){
        cout<<mul << " is multiples of 7 and 4";
    }
    else if (mul%5==0 && mul%7==0){
        cout<<mul << " is multiples of 7 and 4";
    }
    else if(mul%4==0){
        cout<<mul << " is multiples of 4";
    }
    else if(mul%5==0){
        cout<<mul << " is multiples of 5";
    }
    else if(mul%7==0){
        cout<<mul << " is multiples of 7";
    }
    else{
        cout<<mul<<" is no multiples of 4,5 and 7" ;
    }
    return 0;

}