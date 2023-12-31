#include <iostream>
using namespace std;

int intAverage(int array[], int size);
double doubleAverage(double array[], int size);  // Change the parameter type to double[]

int main() {
    int intArray[] = {1, 2, 3, 4, 5, 6};
    double doubleArray[] = {6.0, 4.4, 1.9, 2.9, 3.4, 3.5};

    int intSize = sizeof(intArray) / sizeof(int);
    double doubleSize = sizeof(doubleArray) / sizeof(double);

    int intAvg = intAverage(intArray, intSize);
    double doubleAvg = doubleAverage(doubleArray, doubleSize);

    cout << "Average of intArray: " << intAvg << endl;
    cout << "Average of doubleArray: " << doubleAvg << endl;

    return 0;
}

int intAverage(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

double doubleAverage(double array[], int size) {  // Change the parameter type to double[]
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}


