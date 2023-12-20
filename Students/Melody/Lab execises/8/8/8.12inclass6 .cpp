#include <iostream>
using namespace std;



template <typename T>
T average(T array[], int size);


template <>
int average<int>(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum / size;
}


template <>
double average<double>(double array[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum / size;
}

int main() {
    const int size = 6;
    int intArray[size] = {1, 2, 3, 4, 5,6};
    double doubleArray[size] = {6.0,4.4,1.9,2.9,3.4,3.5};

   
    int intAvg = average(intArray, size);
   cout << "Integer Average: " << intAvg << endl;

   
    double doubleAvg = average(doubleArray, size);
  cout << "Double Average: " << doubleAvg << endl;

    return 0;
}