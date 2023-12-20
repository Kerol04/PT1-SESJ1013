#include <iostream>
using namespace std;

int average(int array[], int size){
    int total = 0;
    for (int i=0; i<size; ++i){
        total += array[i];
    }
    return total/size;
}

double average(double array[], int size){
    double total = 0.0;
    for(int i=0; i<size; i++){
        total += array[i];
    }
    return total/size;
}

int main(){
    int intarray[]={1, 2, 3, 4, 5, 6};
    double doublearray[]= {6.0, 4.4, 1.9, 2.9, 3.4, 3.5};
    int size= sizeof(intarray) / sizeof(intarray[0]);

    int intaverage= average(intarray, size);
    cout<<"Average of the array of integers: "<< intaverage<<endl;

    double doubleaverage= average(doublearray, size);
    cout<<"Average of the array of double: "<< doubleaverage<<endl;

    return 0;
}