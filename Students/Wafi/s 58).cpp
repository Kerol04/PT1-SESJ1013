#include <iostream>

// Function to find the index of the smallest element in an array
int findSmallestIndex(const int arr[], int size) {
    if (size <= 0) {
        // Handle the case where the array is empty
        return -1;
    }

    int smallestIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[smallestIndex]) {
            // Update the smallestIndex if a smaller element is found
            smallestIndex = i;
        }
    }

    return smallestIndex;
}

int main() {
    // Test the function with the given array
    const int size = 8;
    int myArray[size] = {1, 2, 4, 5, 10, 100, 2, -22};

    int resultIndex = findSmallestIndex(myArray, size);

    // Display the result
    if (resultIndex != -1) {
        std::cout << "Index of the smallest element: " << resultIndex << std::endl;
        std::cout << "Smallest element value: " << myArray[resultIndex] << std::endl;
    } else {
        std::cout << "Array is empty." << std::endl;
    }

    return 0;
}
