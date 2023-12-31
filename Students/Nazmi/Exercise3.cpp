#include <iostream>
int average(int array[], int size);
double average(double array[], int size);

using namespace std;

int main() {
    
    const int size = 6;
    int array1[size] = {1,2,3,4,5,6}, avrgArray1;
    double array2[size] = {6.0,4.4,1.9,2.9,3.4,3.5}, avrgArray2;
    
    
    //average for array1
    avrgArray1 = average(array1,size);
    cout << "Average for array with integer type number: " << avrgArray1 << endl;

    //average for array2
    avrgArray2 = average(array2,size);
    cout << "Average for array with double type number: " << avrgArray2 <<endl;
  
    return 0;
}

int average(int array[], int size){
    
    int i, sum = 0;
    
    for (i=0; i<size; i++){
        sum += array[i];
    }
    
    return sum/size;
}

double average(double array[], int size){
    
    int i;
    double sum = 0;
    
    for (i=0; i<size; i++){
        sum += array[i];
    }
   
    return sum/size;
}
