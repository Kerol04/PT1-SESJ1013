#include<iostream>
using namespace std;

int average(int array[],int size);
double average(double array[], int size);

int main()
{
    const int SIZE=6;
    int intarray[SIZE]={1,2,3,4,5,6};
    double doublearray[SIZE]={6.0,4.4,1.9,2.0,3.4,3.5};

    cout<<"Average of int array is "<<average(intarray,SIZE)<<endl;
    cout<<"Average of double array is "<<average(doublearray,SIZE)<<endl;

    system("pause");
    return 0;
}

int average(int array[],int size)
{
    int sum=0;
    for(int j=0;j<size;j++)
    {
        sum+=array[j];
    }
    return sum/size;
}

double average(double array[],int size)
{
    double sum=0;
    for(int j=0;j<size;j++)
    {
        sum+=array[j];
    }
    return sum/size;
}

