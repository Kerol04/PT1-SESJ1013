#include <iostream>
using namespace std;

int average (int array[], int size){
    int sum =0, avg;
    for (int i=0; i<size; i++){
        sum += array[i];
    }
    avg = sum/size;

    return avg;
}

double average (double darray[], int size){
    double sum = 0, avg;
    for(int i=0; i<size; i++){
        sum += darray[i];
    }
    avg = sum/size;

    return avg;
}

int main(){
    int array[] = {1,2,3,4,5,6};
    int size = 6;
    double darray[] = {6.0, 4.4, 1.9, 2.9, 3.4, 3.5};

    cout << "Average for int: "<< average (array,size) << endl;
    cout << "Average for double: "<< average (darray,size) << endl;

    return 0;
}