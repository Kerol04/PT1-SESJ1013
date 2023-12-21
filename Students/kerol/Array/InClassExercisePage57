#include <iostream>

using namespace std;

int average(int [], int );
double average(double [], int );

int main()
{
    const int ARRAY_SIZE = 6;
    int i;
    int arrayINT[ARRAY_SIZE] = {1,2,3,4,5,6};
    double arrayDOUBLE[ARRAY_SIZE] = {6.0,4.4,1.9,2.9,3.4,3.5};
    
    cout<<"Average for arrayINT is : "<<average(arrayINT, ARRAY_SIZE)<<endl;
    cout<<"Average for arrayDOUBLE is : "<<average(arrayDOUBLE, ARRAY_SIZE)<<endl;

    return 0;
}

int average(int array[], int size){
    int i, total, ave;
    for(i=0;i<size;i++){
        total += array[i];
    }
    ave = total / size;
    return ave;
}

double average(double array[], int size){
    int i;
    double total, ave;
    for(i=0;i<size;i++){
        total += array[i];
    }
    ave = total / size;
    return ave;
}
