#include <iostream>
using namespace std;

/* Write a program that has a function that returns the
index of the smallest element in an array of integers.
If there are more than one such elements, return the smallest index.
Use {1,2,4,5,10,100,2,-22} to test the function.
*/

int findSmallestIndex(int array[], int size){
	if (size <=0){
		return -1;
	}
	
	int smallestIndex = 0;
	for (int i=1; i < size; ++i){
		if (array[i] < array[smallestIndex]){
			smallestIndex = i;
		}
	}
	return smallestIndex;
}
int main(){
	
	int array[] = {1, 2, 4, 5, 10, 100, 2, -22};
	int size = sizeof(array)/sizeof(array[0]);
	
	int smallestIndex = findSmallestIndex(array, size);
	
	if(smallestIndex != -1){
		cout << "The smallest element is at index = " << smallestIndex << endl;
		cout << "The smallest element is = " << array[smallestIndex] << endl;
	}else{
		cout << "The array is empty" << endl;
	}
	
	return 0;
}