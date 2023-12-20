#include <iostream>
using namespace std;

int average(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum / size;
}

double average(double array[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum / size;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5, 6};
    int intArraySize = sizeof(intArray) / sizeof(int);
    cout << "Average of integer array: " << average(intArray, intArraySize) <<endl;

    double doubleArray[] = {6.0, 4.4, 1.9, 2.9, 3.4, 3.5};
    int doubleArraySize = sizeof(doubleArray) / sizeof(double);
    cout << "Average of double array: " << average(doubleArray, doubleArraySize) <<endl;

    return 0;
}

