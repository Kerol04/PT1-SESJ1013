#include <iostream>
using namespace std;

    int average(int array[], int size);
double average(double array[], int size);

    int main() {
    int intArray[] = {1, 2, 3, 4, 5, 6};
    double doubleArray[] = {6.0, 4.4, 1.9, 2.9, 3.4, 3.5};

    int intArraySize = sizeof(intArray) / sizeof(int);
    int intArrayAvg = average(intArray, intArraySize);
    cout << "Average of integer array: " << intArrayAvg << endl;

    int doubleArraySize = sizeof(doubleArray) / sizeof(double);
    double doubleArrayAvg = average(doubleArray, doubleArraySize);
    cout << "Average of double array: " << doubleArrayAvg << endl;

    return 0;
}

int average(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

double average(double array[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}





