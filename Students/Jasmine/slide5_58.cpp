#include <iostream>
using namespace std;

int smallest (int num[], int size){
    int min = num[0];
    for(int i=1; i<size; i++){
        if (num[i]<min){
            min = num[i];
        }
    }
    return min;
}

int main(){
    int num[] = {1,2,4,5,10,100,2,-22};
    int size = 8;
    int min; 

    min = smallest(num, size);

    cout << "The smallest index: " << min;

    return 0;
}