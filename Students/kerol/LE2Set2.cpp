//Lab Exercise 2 Set 2

#include <iostream>

using namespace std;

void DisplayOdd();
void DisplayEven();
int sum;

int main(){
    
    int number, remaind;
    sum=0;
    
    cout<<"Enter an integer number : ";
    cin >> number;
    
    while(number>0){
        remaind = number % 10;
        sum += remaind;
        number /= 10;
        
        if(number>0)
        cout<<remaind<<" + ";
        else
        cout<<remaind<<" = "<<sum<<endl;
    }
    
    switch(sum%2){
        case 1 : DisplayOdd();
                 break;
        case 0 : DisplayEven();
                 break;
    }
    
    return 0;
}

void DisplayOdd(){
    if(sum%4==0 && sum%5==0){
        cout<<sum<<" is odd number & multiples of 4 and 5";
    }else if(sum%4==0){
        cout<<sum<<" is odd number & multiples of 4";
    }else if(sum%5==0){
        cout<<sum<<" is odd number & multiples of 5";
    }else{
        cout<<sum<<" is odd number";
    }
}

void DisplayEven(){
    if(sum%4==0 && sum%5==0){
        cout<<sum<<" is even number & multiples of 4 and 5";
    }else if(sum%4==0){
        cout<<sum<<" is even number & multiples of 4";
    }else if(sum%5==0){
        cout<<sum<<" is even number & multiples of 5";
    }else{
        cout<<sum<<" is even number";
    }
}
