/*CHAPTER 5 ARRAY - SLIDE 58

Write a program that has a function that returns
the index of the smallest element in an array of
integers. If there are more than one such
elements, return the smallest index. Use
{1,2,4,5,10,100,2,-22} to test the
function.

*/

#include <iostream>
using namespace std;

int smallest(int[],int);

int main()
{
    
    int L[8] = {1,2,4,5,10,100,2,-22};

    cout << "The smallest element in the array is in index"<<smallest(L,8);

    return 0;
}

int smallest(int L[], int s)
{
    int lowest = 999999;

    for(int i=0;i<8;i++){
        if (L[i]<lowest){
        lowest = i;
        }
    }
    return lowest;
}