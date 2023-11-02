//Lab Exercise 2 Set 4

#include <iostream>

using namespace std;

void DisplayOdd();
void DisplayEven();
int product;

int main(){
    
    int number, remaind;
    product=1;
    
    cout<<"Enter an integer number : ";
    cin >> number;
    
    do{
        remaind = number % 10;
        product *= remaind;
        number /= 10;
        
        if(number>0)
        cout<<remaind<<" * ";
        else
        cout<<remaind<<" = "<<product<<endl;
    }while(number>0);
    
    switch(product%2){
        case 1 : DisplayOdd();
                 break;
        case 0 : DisplayEven();
                 break;
    }
    
    return 0;
}

void DisplayOdd(){
    if(product%3==0 && product%5==0){
        cout<<product<<" is odd number & multiples of 3 and 5";
    }else if(product%3==0){
        cout<<product<<" is odd number & multiples of 3";
    }else if(product%5==0){
        cout<<product<<" is odd number & multiples of 5";
    }else{
        cout<<product<<" is odd number";
    }
}

void DisplayEven(){
    if(product%3==0 && product%5==0){
        cout<<product<<" is even number & multiples of 3 and 5";
    }else if(product%3==0){
        cout<<product<<" is even number & multiples of 3";
    }else if(product%5==0){
        cout<<product<<" is even number & multiples of 5";
    }else{
        cout<<product<<" is even number";
    }
}
