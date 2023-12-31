#include <iostream>
using namespace std;

int main(){
    double rainFall[12];
    cout<<"Enter rainfall of month 1: ";
    cin>>rainFall[0];
    while(rainFall[0]<0){
            if(rainFall[0]<0)
            cout<<"Enter rainfall of month 1 again: ";
            cin>>rainFall[0];
        }

    double highest=rainFall[0];
    double lowest=rainFall[0];
    double total=0, average;
    for(int i=1;i<12;i++){
        cout<<"Enter rainfall of month  "<<(i+1)<<" : ";
        cin>>rainFall[i];
        while(rainFall[i]<0){
            if(rainFall[i]<0)
            cout<<"Enter rainfall of month  "<<(i+1)<<" again"<<" : ";
            cin>>rainFall[i];
        }
        total=total+rainFall[i];
        
        if(highest<rainFall[i])
           highest=rainFall[i];
        if(lowest>rainFall[i])
           lowest=rainFall[i];

    }
    average=total/12;
    
    cout<<" The total rainfall for the year : "<<total<<endl;
    cout<<" The average monthly rainfall : "<<average<<endl;
    cout<<" The month with the highest rainfall : "<<highest<<endl;
    cout<<" The month with the lowest rainfall :"<<lowest<<endl;
}
