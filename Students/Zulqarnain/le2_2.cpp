#include <iostream>
using namespace std;

int main(){
    int num=0,i,total=0;

    cout<<"Enter an integer number: ";
    cin>>num;

    i=num%10;
    cout<<i;
    total=total+i;
    num=num/10;

    do{
        i=num%10;
        cout<<" + "<<i;
        total=total+i;
        num=num/10;
    }while(num!=0);

    cout<<" = "<<total;

    if(total%2==0){
        cout<<"\n"<<total<<" is an even number";
    }
    else{
        cout<<"\n"<<total<<" is an odd number";
    }

    if(total%4==0 && total%5==0){
        cout<<" &"<< " is multiples of 4 and 5";
    }
    else if(total%4==0){
        cout<<" &"<< " is multiples of 4";
    }
    else if(total%5==0){
        cout<<" &"<< " is multiples of 5";
    }
    


    return 0;
}
