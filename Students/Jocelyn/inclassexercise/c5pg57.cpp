#include <iostream>
using namespace std;
/* Write a program that has two overloaded functions that return the average of an array with the following headers:
int average(int array[], int size)
double average(int array[], int size)
Use {1,2,3,4,5,6} and 
{6.0,4.4,1.9,2.9,3.4,3.5} to test the functions.
 */

int average(int array[], int size){
	
	int sum = 0;
	for (int i = 0 ; i < size ; i++){
		sum += array[i];
	}

	return sum / size;
}

double average(double array[], int size){

	double sum = 0;
	for (int i = 0 ; i < size ; i++){
		sum += array[i];
	}

	return sum / size;
}

int main(){
	
	int intArray[] = {1, 2, 3, 4, 5, 6};
	double doubleArray[] = {6.0, 4.4, 1.9, 2.9, 3.4, 3.5};
	int size = sizeof (intArray)/ sizeof(int);

	int intAvg = average(intArray, size);
	cout << "The average of int array = " << intAvg << endl;
    
	double doubleAvg = average(doubleArray, size);
	cout << "The average of double array = " << doubleAvg << endl;
	
	return 0;
}