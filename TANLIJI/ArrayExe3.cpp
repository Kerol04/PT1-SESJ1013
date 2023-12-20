#include <iostream>
using namespace std;

int main(){
    double rainfall[12];
    double average;
    double sum = 0;
    double highest_month;
    double lowest_month;
    cout<<"Enter 12 months rainfall."<<endl;
    for(int i=0;i<12;i++){
        cout<<"Month "<<i+1<<": ";
        cin>>rainfall[i];
    }
    double highest=rainfall[0];
    double lowest=rainfall[0];
    for(int i=0;i<12;i++){
        sum+=rainfall[i];
        if(rainfall[i]>highest){
            highest=rainfall[i];
            highest_month=i;
        }
        if(rainfall[i]<lowest){
            lowest=rainfall[i];
            lowest_month=i;
        }
    }
    average=sum/12;
    cout<<"The total rainfall is "<<sum<<endl;
    cout<<"The average monthly rainfall is "<<average<<endl;
    cout<<"The highest monthly rainfall is on "<<highest_month<<" which is "<<highest<<endl;
    cout<<"The lowest monthly rainfall is on "<<lowest_month<<" which is "<<lowest<<endl;

}
