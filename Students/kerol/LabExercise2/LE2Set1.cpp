//Lab Exercise 2 Set 1

#include <iostream>

using namespace std;

int main(){
    
    int sum=0, number, remaind;
    
    cout<<"Enter an integer number : ";
    cin >> number;
    
    do{
        remaind = number % 10;
        sum += remaind;
        number /= 10;
        
        if(number>0)
        cout<<remaind<<" + ";
        else
        cout<<remaind<<" = "<<sum<<endl;
    }while(number>0);
    
    if(sum%3==0 && sum%4==0 && sum%5==0){
        cout<<sum<<" is multiples of 3, 4 and 5";
    }else if(sum%3==0 && sum%4==0){
        cout<<sum<<" is multiples of 3 and 4";
    }else if(sum%4==0 && sum%5==0){
        cout<<sum<<" is multiples of 4 and 5";
    }else if(sum%3==0 && sum%5==0){
        cout<<sum<<" is multiples of 3 and 5";
    }else if(sum%3==0){
        cout<<sum<<" is multiples of 3";
    }else if(sum%4==0){
        cout<<sum<<" is multiples of 4";
    }else if(sum%5==0){
        cout<<sum<<" is multiples of 5";
    }
    
    return 0;
}
