/*CHAPTER 5 ARRAY - SLIDE 57

Write a program that has two overloaded
functions that return the average of an array
with the following headers:

int average(int array[], int size)
double average(int array[], int size)

Use {1,2,3,4,5,6} and
{6.0,4.4,1.9,2.9,3.4,3.5} to test the functions.

*/

#include <iostream>
using namespace std;

int average(int[],int);
double average(double[], int);

int main()
{

    int arrayI[6] = {1,2,3,4,5,6};
    double arrayD[6] = {6.0,4.4,1.9,2.9,3.4,3.5};

    cout << average(arrayI, 6) << endl;
    cout << average(arrayD, 6);

    return 0;
}

int average(int arrayI[], int size)
{
    int sum = 0, av;

    for (int i = 0; i < size; i++){
        sum = sum + arrayI[i];
    }
    av = sum/size;
    return av;
}

double average(double arrayD[], int size)
{
    int sum = 0, av;

    for (int i = 0; i < size; i++){
        sum = sum + arrayD[i];
    }
    av = sum/size;
    return av;
}


