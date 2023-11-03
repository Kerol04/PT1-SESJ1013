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
    if(sum%3==0 && sum%4==0 && sum%5==0){
        cout<<sum << " is multiples of 3,4 and 5";
    }
    else if (sum%3==0 && sum%4==0){
        cout<<sum << " is multiples of 3 and 4";
    }
    else if (sum%3==0 && sum%5==0){
        cout<<sum << " is multiples of 3 and 5";
    }
    else if (sum%4==0 && sum%5==0){
        cout<<sum << " is multiples of 4 and 5";
    }
    else if(sum%3==0){
        cout<<sum << " is multiples of 3 ";
    }
    else if(sum%4==0){
        cout<<sum << " is multiples of 4";
    }
    else if(sum%5==0){
        cout<<sum << " is multiples of 5";
    }
    else{
        cout<<sum<<" is no multiples of 3,4 and 5";
    }
    return 0;

}