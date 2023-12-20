#include <iostream>
using namespace std;
int smallestIndex(int array[], int size);

int main() {
    const int size = 8;
    int array[]={1,2,4,5,10,100,2,-22};

    cout<<"Index with the smallest element is index "<<smallestIndex(array, size)<<endl;
    return 0;
}

int smallestIndex(int array[], int size)
{
    int smallest = 1000000;
    int index =0;
    for(int i=0;i<size;i++){
        if (array[i]<smallest)
        {
            smallest=array[i];
            index=i;
        }
    }
    return index;
}
