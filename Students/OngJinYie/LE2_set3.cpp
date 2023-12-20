# include <iostream>
using namespace std;

int num, digit, pro=1;
int main()
{
    cout << "Enter an integer  number: ";
    cin >> num;
 
    while (num>0)
    {
        digit=num%10;
        cout << digit;
        num=num/10;
        if (num>0)
        {
            cout << " * ";
        }
        pro=pro*digit;

    } 

    cout << " = " <<pro<<endl;
    cout <<pro<<" is multiples of ";

    
    if(pro%4==0&&pro%5==0&&pro%7==0)
    {
        cout<<"4, 5 and 7";
    }else if(pro%7==0&&pro%5==0)
    {
        cout<<"7 and 5";
    }
    else if(pro%4==0&&pro%5==0)
    {
        cout<<"4 and 5";
    }
    else if(pro%7==0&&pro%4==0)
    {
        cout<<"7 and 4";
    }
    else if(pro%7==0)
    {
        cout<<"7";
    }
    else if(pro%5==0)
    {
        cout<<"5";
    }
    else
    cout<<"4";

    return 0;
}
