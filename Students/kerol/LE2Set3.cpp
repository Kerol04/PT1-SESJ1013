//Lab Exercise 2 Set 3

#include <iostream>

using namespace std;

int main(){
    
    int product=1, number, remaind;
    
    cout<<"Enter an integer number : ";
    cin >> number;
    
    while(number>0){
        remaind = number % 10;
        product *= remaind;
        number /= 10;
        
        if(number>0)
        cout<<remaind<<" * ";
        else
        cout<<remaind<<" = "<<product<<endl;
    }
    
    if(product%4==0 && product%5==0 && product%7==0){
        cout<<product<<" is multiples of 4, 5 and 7";
    }else if(product%4==0 && product%5==0){
        cout<<product<<" is multiples of 4 and 5";
    }else if(product%5==0 && product%7==0){
        cout<<product<<" is multiples of 7 and 5";
    }else if(product%4==0 && product%7==0){
        cout<<product<<" is multiples of 7 and 4";
    }else if(product%4==0){
        cout<<product<<" is multiples of 4";
    }else if(product%5==0){
        cout<<product<<" is multiples of 5";
    }else if(product%7==0){
        cout<<product<<" is multiples of 7";
    }
    
    return 0;
}
