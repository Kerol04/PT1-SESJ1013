#include <iostream>
using namespace std;

int smallestindex(int array[], int size){
    int findsmallestindex=0;

    for(int i=1; i<size; ++i){
        if(array[i]<array[findsmallestindex]){
            findsmallestindex=i;
        }
    }

    return findsmallestindex;
}

int main(){
    int intarray[]={1, 2, 4, 5, 10, 100, 2, -22};
    int size= sizeof(intarray)/sizeof(intarray[0]);

    int findsmallestindex=smallestindex(intarray, size);

    cout<<"Index of the smallest element in the array: " << findsmallestindex<<endl;

    return 0;
}