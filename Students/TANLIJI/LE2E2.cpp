#include <iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    int digit;
    cout<<"Enter an integer number: ";
    cin>>num;
    for(int n=0;num>0;n++){
        if (n>0){
            cout<< digit <<" + ";
        }
        digit = num%10;
        sum+= digit;
        num/=10;
        if (num%10==0){
        cout << digit ;
        }
    }
    cout<<" = " <<sum<<endl;
    if(sum%4==0 && sum%5==0 ){
        cout<<sum << " is even number & multiples of 4 and 5";
    }
    else if (sum%4==0){
        cout<<sum << " is even number & multiples of 4";
    }
    else if (sum%5==0 && sum%2==0){
        cout<<sum << " is even number & multiples of 5";
    }
    else if (sum%2==0){
        cout<<sum << " is an even number";
    }
    else if(sum%5==0 && sum%2!=0){
        cout<<sum << " is odd number & multiples of 5";
    }
    else if(sum%2!=0){
        cout<<sum << " is odd number";
    }
    
    return 0;

}