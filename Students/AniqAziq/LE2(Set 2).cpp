#include<iostream>
using namespace std;

int main()
{
    int num,digit,sum=0;

    cout<<"Enter an integer number: ";
    cin>>num;

    do{
    digit=num % 10;
    sum+=digit;
    num=num/10;
    }while(digit!=0);

    cout<<"Sum = "<<sum<<endl;
    if(sum%4==0){
        cout<<"The "<<sum<<" is multiples of 4\n";
    }
    if(sum%5==0){
        cout<<"The "<<sum<<" is multiples of 5\n";
    }

    if(sum%2==0)
    cout<<" "<<sum<<" is even number\n";

    else if(sum%2!=0)
    cout<<""<<sum<<" is odd number\n";

    system("pause");
    return 0;
}