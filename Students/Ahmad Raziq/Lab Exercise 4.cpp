#include <iostream>

using namespace std;

int small(int nums[], int size);

int main(){
    int nums[]={1,2,4,5,10,100,2,-22}, smallest = 0, size = 0;

    size = sizeof(nums)/sizeof(int);
    smallest = small(nums, size);

    cout<< "Index with the smallest element is index " << smallest <<endl;

    system("pause");
    return 0;
}

int small(int nums[], int size){
    int smallest = nums[1];

    for(int i = 0; i<size; i++){
        if (nums[i] < smallest){
            smallest = i;
        }
    }

    return smallest;
}