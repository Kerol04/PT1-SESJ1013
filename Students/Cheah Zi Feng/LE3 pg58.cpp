#include <iostream>
using namespace std;

int findSmallestIndex(int arr[], int size) {
    int smallestIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[smallestIndex]) {
            smallestIndex = i;
        }
    }
    return smallestIndex;
}

int main() {
    int arr[] = {1, 2, 4, 5, 10, 100, 2, -22};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallestIndex = findSmallestIndex(arr, size);

    cout << "The index of the smallest element is: " << smallestIndex <<endl;

    return 0;
}

