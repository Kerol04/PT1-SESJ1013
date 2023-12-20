#include <iostream>
using namespace std;

int average(int array[], int size);
double average(double array[], int size);

int main()
{  
   
    int intArray[]={1,2,3,4,5,6};
    double doubleArray[]={6.0,4.4,1.9,2.9,3.4,3.5};    

    int intSize = sizeof (intArray) / sizeof(int);
    int intAverage = average(intArray, intSize);
    cout << "Average of integer: " << intAverage << endl;

    double doubleSize= sizeof(doubleArray)/sizeof(double);
    double doubleAverage = average(doubleArray, doubleSize);
    cout << "Average of double: " << doubleAverage << endl;

    return 0;
}

int average(int array[],int size)
{   
    int sum=0;

    for(int count=0;count<size;count++)
    {
        sum=sum+array[count];
    }

    return sum / size;
}

double average(double array[],int size)
{
    double sum=0;

    for(int count=0;count<size;count++)
    {
        sum=sum+array[count];
    }

    return sum / size;
}