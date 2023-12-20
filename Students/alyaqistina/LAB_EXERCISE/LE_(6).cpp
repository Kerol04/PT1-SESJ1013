/*In-Class Exercise Slide 58 CHAPTER 5
   7 NOVEMBER 2023
   Write a program that has a function that returns
   the index of the smallest element in an array of
   integers. If there are more than one such
   elements, return the smallest index. Use
   {1,2,4,5,10,100,2,-22} to test the function.*/


#include <iostream>
using namespace std;

int smallest(int array[], int size);

int main(){

    const int size = 8;
    int array[]={1,2,4,5,10,100,2,-22};
    cout<<"The smallest element is"<<smallest(array, size);
}

int smallest(int array[], int size){
    int s = 999999;
    int index = 0;

    for(int i=0;i<size;i++){
        if (array[i]<s){
            s=array[i];
            index=i;

        }
    }return index;
}