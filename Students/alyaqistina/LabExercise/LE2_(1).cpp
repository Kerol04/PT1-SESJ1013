       #include<iostream>
using namespace std;
int main()
{
    int num, baki, sum=0;
    cout<<"Enter an integer number: ";
    cin>>num;
do    {
        baki = num%10;
        
        
        num = num/10;
          cout << baki;
          if (num>0){
              cout << " + ";
          }
        sum = sum+baki;
  
    
    }    while(num!=0);

    
        cout << " = "<<sum<<endl;
    
    if (sum%5 == 0 && sum%4==0 && sum%3==0){
        cout<< sum << " is multiples of 3, 4, and 5."<<endl;
    }
    else if (sum%5==0 && sum%4==0 ){
        cout<<sum<<" is multiples of 4 and 5."<<endl;
        
    }
    else if (sum%4==0 && sum%3==0){
        cout<<sum<<" is multiples of 3 and 4."<<endl;
    }
    else if (sum%5==0){
        cout<<sum<<" is multiples of 5."<<endl;
    }
    else if (sum%4==0){
        cout<<sum<<" is multiples of 4."<<endl;
    }
    else if (sum%3==0){
        cout<<sum<<" is multiples of 3."<<endl;
    }
    return 0;
}
