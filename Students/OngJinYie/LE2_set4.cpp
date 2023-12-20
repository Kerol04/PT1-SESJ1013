#include <iostream>
using namespace std;

int num, digit, pro=1;
int main()
{
    cout <<"Enter integer number: ";
    cin >> num;

    do
    {
       digit=num%10;
       num=num/10;
       cout<<digit<<" * ";
       pro=pro*digit;

    } while (num>0);

    
    cout<<" = "<<pro<<endl;
    cout<<pro<<" is";

    if(pro%2==0)
    {
        cout<<" even number";
    }else
    {
        cout<<" odd number";
    }

    if(pro%3==0&&pro%5==0)
    {    
        cout<<" & mulitples of 3 and 5";
    }else if (pro%3==0)
    {
        cout<<" & multiples of 3";
    }else if (pro%5==0)
    {
        cout<<" & multiples of 5";
    }    
    return 0;
}
