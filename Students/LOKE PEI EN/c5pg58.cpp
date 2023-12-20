#include <iostream>
using namespace std;
int SmallestIndex(const int array[], int size);

int main() {
    int testArray[] = {1, 2, 4, 5, 10, 100, 2, -22};
    int arraySize = sizeof(testArray) / sizeof(testArray[0]);
    int smallestIndex = SmallestIndex(testArray, arraySize);
   
    cout << "The index of the smallest element is: " << smallestIndex << endl;

    return 0;
}

int SmallestIndex(const int array[], int size){
   
    if (size == 0) {
        return -1; 
    }
    int smallestIndex ;
    for (int i = 0; i < size; i++) {
        
        if (array[i] < array[smallestIndex]) {
            smallestIndex = i; 
        }
    }
    
    return smallestIndex ;
}
