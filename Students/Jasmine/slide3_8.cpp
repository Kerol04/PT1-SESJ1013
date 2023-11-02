#include <iostream>
using namespace std;

int main (){
    int a = 10;

    cout << a << endl;
    cout << (a==1) << endl;
    cout << (a>1) << endl;
    cout << (a=5) << endl;

    a = (a!=5);
    cout << a;
}