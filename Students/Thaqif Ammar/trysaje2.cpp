#include <iostream>
using namespace std;

int main(){

const int month = 5;
double thaqifWeight[month];
double clonethaqif[month];
double tot=0.0;
int i;

for(i=0;i<month;i++)
{
    tot+=100.0;
    thaqifWeight[i]=tot;
    clonethaqif[i]=thaqifWeight[i];
}

cout<<clonethaqif[3]<<endl;

    
    
    
    system ("pause");
      return 0;
}