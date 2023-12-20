#include <iostream>
using namespace std;
int main() {
     int n1, n2, n3, largest;    
    
     cout << "Enter 3 numbers: "<<endl;    
     cin >> n1 >> n2 >> n3; 

     if (n1 > n2 && n1 > n3)
     largest=n1;

     else if (n2 > n1 && n2 > n3)
     largest=n2;

     else largest=n3;

     cout <<"Largest Number: "<< largest;

     system ("pause");

     return 0;
    
}