#include <iostream>
using namespace std;

int main(){

int num[10];
cout<<"Enter a number: ";
cin>>num[0];

int highest=num[0];
int lowest= num[0];

for(int i=1;i<10;i++){
    cout<<"Enter a number:";
    cin>>num[i];
    if(highest<num[i])
       highest=num[i];
    if(lowest>num[i])
       lowest=num[i];
}

cout<<"Highest :"<<highest<<endl;
cout<<"lowest :"<<lowest;

return 0;
}