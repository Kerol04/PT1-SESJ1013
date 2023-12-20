#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;

    cout<<"Enter an integer number:";
    cin>>num;

    do{
        int digit=num%10;
        sum=sum+digit;
        num=num/10;
        cout<<digit;
        if(num>0){
            cout<<"+";
        }
    
    while(num>0)
    {
       cout<<"="<<sum<<endl;
    }
    }


    if(sum%2==0 && sum%4==0 && sum%5==0)
    {
        cout<<sum<<" is even number & multiples of 4 and 5";
    }
    else if(sum%2==1 && sum%4==0 && sum%5==0)
    {
        cout<<sum<<" is odd number & multiples of 4 and 5";
    }
    else if(sum%2==0 && sum%4==0)
    {
        cout<<sum<<" is even number & multiples of 4";
    }
    else if(sum%2==1 && sum%4==0)
    {
        cout<<sum<<" is odd number & multiples of 4";
    }
    else if(sum%2==0 && sum%5==0)
    {
        cout<<sum<<" is even number & multiples of 5";
    }
    else if(sum%2==1 && sum%5==0)
    {
        cout<<sum<<" is odd number & multiples of 5";
    }
    else if(sum%2==0)
    {
        cout<<sum<<" is even number";
    }
    else
    {
        cout<<sum<<" is odd number";
    }
    return 0;
}
