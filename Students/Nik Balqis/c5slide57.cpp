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
    int intArray[] = {1,2,3,4,5,6};
    double doubleArray[] = {6.0,4.4,1.9,2.9,3.4,3.5};
    int size = sizeof (intArray) / sizeof(intArray[0]);

    int intAvg = average(intArray, size);
    cout << "Integer Average: " << intAvg << endl;

    double doubleAvg = average(doubleArray, size);
    cout << "Double Average: " << doubleAvg << endl;

    return 0;
}
