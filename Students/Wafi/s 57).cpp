#include <iostream>

// Function to calculate the average of an integer array
template <typename T>
T calculateAverage(T array[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5, 6};
    double doubleArray[] = {6.0, 4.4, 1.9, 2.9, 3.4, 3.5};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    // Test the functions
    int intAvg = calculateAverage(intArray, intSize);
    double doubleAvg = calculateAverage(doubleArray, doubleSize);

    // Display the results
    std::cout << "Average of integer array: " << intAvg << std::endl;
    std::cout << "Average of double array: " << doubleAvg << std::endl;

    return 0;
}
