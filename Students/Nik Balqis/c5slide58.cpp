#include <iostream>
using namespace std;

int smallest(int array[], int size) {
    if (size <= 0) {
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

    int smallestIndex = smallest(array, size);

    cout << "The smallest element: " << array[smallestIndex] << endl;
    cout << "The smallest element is at index: " << smallestIndex << endl;

    return 0;
}
