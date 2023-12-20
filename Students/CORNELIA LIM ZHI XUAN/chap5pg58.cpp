#include <iostream>

// Function to find the index of the smallest element in an array
int findSmallestIndex(int array[], int size) {
    if (size <= 0) {
        // Handle empty array case
        return -1;
    }

    int smallestIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (array[i] < array[smallestIndex]) {
            smallestIndex = i;
        }
    }

    return smallestIndex;
}

int main() {
    int testArray[] = {1, 2, 4, 5, 10, 100, 2, -22};
    int arraySize = sizeof(testArray) / sizeof(int);

    int smallestIndex = findSmallestIndex(testArray, arraySize);

    if (smallestIndex != -1) {
        std::cout << "The smallest element is at index: " << smallestIndex << std::endl;
        std::cout << "The smallest element is: " << testArray[smallestIndex] << std::endl;
    } else {
        std::cout << "The array is empty." << std::endl;
    }

    return 0;
}

