//SET 3

#include<iostream>
using namespace std;
int main()
{
    int num, baki, sum=1;
    cout<<"Enter an integer number: ";
    cin>>num;
 
     
     while(num>0){
        
        baki = num%10;
        sum = sum*baki;
        num = num/10;
        cout << baki;

          if (num>0){
              cout << " * ";
          }
    }

    cout << " = "<<sum<<endl;

    
    if (sum%5 == 0 && sum%4==0 && sum%7==0){
        cout<< sum << " is multiples of 4, 5, and 7."<<endl;
    }
    else if (sum%5==0 && sum%4==0 ){
        cout<<sum<<" is multiples of 4 and 5."<<endl;
        
    }
    else if (sum%4==0 && sum%7==0){
        cout<<sum<<" is multiples of 7 and 4."<<endl;
    }
    else if (sum%5==0){
        cout<<sum<<" is multiples of 5."<<endl;
    }
    else if (sum%4==0){
        cout<<sum<<" is multiples of 4."<<endl;
    }
    else if (sum%7==0){
        cout<<sum<<" is multiples of 7."<<endl;
    }
    return 0;
}