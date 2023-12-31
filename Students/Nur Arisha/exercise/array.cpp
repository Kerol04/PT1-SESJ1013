#include <iostream>
using namespace std;

//function header
int average(int[], int);
double average(double[], int);

int main()
{
    const int size = 6; //declare size of array
    int array_int[size] = {1, 2, 3, 4, 5, 6}; //elements in integer array
    double array_double[size] = {6.0, 4.4, 1.9, 2.9, 3.4, 3.5}; //elements in double array

    //function call
    cout << "Average for integer is: " << average(array_int, size) << endl;
    cout << "Average for double is: " << average(array_double, size) << endl;

}

int average(int array[], int size) //overload function definition (integer)
{
    int tnum;
    int avg, sum = 0;
    for (tnum = 0; tnum < size; tnum++)
    {
        sum += array[tnum]; //finding sum of numbers in array
    }

    avg = sum/ size; //finding average

    return avg;

}

double average(double array[], int size) //overload function definition (double)
{
    int tnum;
    double avg, sum = 0;
    for (tnum = 0; tnum < size; tnum++)
    {
        sum += array[tnum];
    }

    avg = sum/ size;

    return avg;

}