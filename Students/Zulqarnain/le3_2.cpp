#include <iostream> 
using namespace std; 

int smallestindex(int array[],int size);

int main(){
    int array[]={1,2,4,5,10,100,2,-22},size = sizeof(array) / sizeof(array[0]);
    cout<<"Smallest element's index is "<<smallestindex(array,size);
    return 0;
}
int smallestindex(int array[],int size){
    int j,small=0;
    for(int i=0;i<size;i++){
        if(array[i]<small){
            small=array[i];
            j=i+1;
        }
    }
    return j;
}