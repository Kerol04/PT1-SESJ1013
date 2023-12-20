#include <iostream>
using namespace std;
int average(int array[], int size);
double average(double array[], int size);

int main() {
    const int size = 6;
    int array[]={1,2,3,4,5,6};
    double arrayDouble[]={6.0,4.4,1.9,2.9,3.4,3.5};

    cout<<"Average for int is: "<<average(array, size)<<endl;
    cout<<"Average for double is : "<<average(arrayDouble,size)<<endl;
    return 0;
}

int average(int array[], int size)
{
    int sum = 0;
    for(int i=0;i<size;i++){
        sum=sum + array[i];
    }
    return sum/size;
}

double average(double arrayDouble[], int size)
{
    double sum = 0;
    for(int i=0;i<size;i++){
        sum=sum + arrayDouble[i];
    }
    return sum/size;
}