#include <iostream>

using namespace std;

int smallest(int [], int);

int main()
{
    const int arraySIZE = 8;
    int array[arraySIZE], i;
    
    cout<<"Enter "<<arraySIZE<<" integers :"<<endl;
    for(i=0;i<arraySIZE;i++){
        cin >>array[i];
    }
    cout<<"\nThe index of the smallest element in the array of the numbers is "<<smallest(array,arraySIZE)<<endl;

    return 0;
}

int smallest(int array[], int size){
    int small=1000000, i;
    for (i=0;i<size;i++){
        if(small>array[i])
        small = array[i];
    }
    return small;
}
