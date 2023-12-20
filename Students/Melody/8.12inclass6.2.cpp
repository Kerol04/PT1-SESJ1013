#include <iostream>
using namespace std;


int findSmallestIndex(int array[], int size) {
    if (size <= 0) {
        
        std::cerr << "Error: Empty array\n";
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
    int array[] = {1, 2, 4, 5, 10, 100, 2, -22};
    int size = sizeof(array) / sizeof(array[0]);

    int smallestIndex = findSmallestIndex(array, size);

    if (smallestIndex != -1) {
        std::cout << "Index of the smallest element: " << smallestIndex << std::endl;
        std::cout << "Smallest element: " << array[smallestIndex] << std::endl;
    } else {
        std::cerr << "Unable to find the smallest element in the array.\n";
    }

    return 0; 
}
