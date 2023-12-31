#include <iostream>
int findSmallest(int array[], int size);

using namespace std;

int main(){
    int array[] = {1, 2, 4, 5, 10, 100, 2, -22};
    int size;
    
    size = sizeof(array) / sizeof(array[0]);
    
    cout << "The index of the smallest element: " << findSmallest(array,size);
    
  
    return 0;
}

int findSmallest(int array[], int size){
    
   int i, smallest = 0;
   
    for (i=0; i<size; i++){
        
        if (array[i] < array[smallest]){
            smallest = i;
        }
    }
    return smallest;
    
}
