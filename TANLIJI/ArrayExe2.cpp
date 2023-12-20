#include <iostream>
using namespace std;

int main(){
    double values[10];
    int largest;
    int smallest;
    cout<<"Enter 10 values :"<<endl;
    for (int i=0; i<10;i++){
        cout<<"Value "<<i+1<<":"<<endl;
        cin>>values[i];
    }
    largest=values[0];
    smallest=values[0];
    for(int i=0; i<10;i++){
            if (values[i]>largest){
                largest=values[i];
            } 
            if (values[i]<smallest){
                smallest=values[i];
            }
    }
    cout<<"The largest number is "<<largest<<endl;
    cout<<"The smallest number is "<<smallest<<endl;
    return 0;

}
