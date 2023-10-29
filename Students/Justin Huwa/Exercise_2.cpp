#include <iostream>
using namespace std;

int main(){
    int a=1;
    double d=1.0;

    a = 46/9;
    cout << "i) The value of 'a' is: " << a << endl;
    a = 46%9+4*4-2;
    cout << "ii) The value of 'a' is: " << a << endl;
    a = 45+43%5*(23*3%2);
    cout << "iii) The value of 'a' is: " << a << endl;
    a %= 3/a+3;
    cout << "iv) The value of 'a' is: " << a << endl;
    d += 1.5*3+(++a);
    cout << "v) The value of 'd' is: " << d << endl;
    d -= 1.5*3+a++;
    cout << "vi) The value of 'd' is: " << d << endl;
    
    return 0;
}