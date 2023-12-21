#include <iostream> 
using namespace std; 
int average(int array[], int size); 
double average(double array[], int size); 
 
int main(){
    int size=6, array[]={1,2,3,4,5,6};
    double array1[]={6.0,4.4,1.9,2.9,3.4,3.5};


    cout<<"Int array's average is "<<average(array,size)<<endl;
    cout<<"Double array's average is "<<average(array1,size)<<endl;
    
    return 0;
}
int average(int array[], int size){
    int count=0;
    for(int i=0;i<size;i++){
        count+=array[i];
    }
    return count/size;
}
double average(double array[], int size){
    double count=0;
    for(int i=0;i<size;i++){
        count+=array[i];
    }
    return count/size;
}   