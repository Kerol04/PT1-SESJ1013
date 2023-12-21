#include <iostream>
using namespace std;

int average(int array[], int size) {
    if (size == 0) {
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }

    return sum / size;
}

double average(double array[], int size) {
    if (size == 0) {
        return 0.0;
    }

    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }

    return sum / size;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5, 6};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    double doubleArray[] = {6.0, 4.4, 1.9, 2.9, 3.4, 3.5};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    int intAverage = average(intArray, intSize);
    double doubleAverage = average(doubleArray, doubleSize);

    cout << "Average of the integer array: " << intAverage << endl;
    cout << "Average of the double array: " << doubleAverage << endl;

    return 0;
}
