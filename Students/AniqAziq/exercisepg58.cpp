#include<iostream>
using namespace std;
int smallestindex(int num[],int size);


int main()
{
    int smallest,element[8]={1,2,4,5,10,100,2,-22};
    
    smallest=smallestindex(element,8);
    cout<<"The smallest element is "<<smallest<<endl;

    system("pause");
    return 0;
}

int smallestindex(int num[],int size)
{
    int small;
    for(int y=0;y<size;y++)
    {
        if(num[y]<small)
        small=num[y];
    }
    return small;
}