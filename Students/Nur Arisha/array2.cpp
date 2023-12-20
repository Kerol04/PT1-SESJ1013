#include <iostream>
using namespace std;

int small(int[], int); //function header

int main()
{
    const int size = 8; //declare size of array
    int numbers[size] = {1, 2, 4, 5, 10, 100, 2, -22}; //elements of array

    cout << "Index of the smallest element in the array is " << small(numbers, size); //function call
}

int small(int array[], int size) //function definition
{
    int count, lowest;
    lowest = 0; 

    for (count = 1; count < size; count++)
    {
        if (array[count] < array[lowest]) //finding index of the smallest element
        {
        lowest = count;
        }
    }

    return lowest;
}