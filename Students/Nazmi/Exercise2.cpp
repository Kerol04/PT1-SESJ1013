#include <iostream>

using namespace std;

int main(){

    int a;
    double d;

    //i)
    a = 1, d = 1.0;

    a = 46/9;
    cout << "Value of a is " << a << endl;

    //ii)
    a = 1, d = 1.0;

    a = 46 % 9 + 4 * 4 - 2;
    cout << "Value of a is " << a << endl;
    
    ///iii)
    a = 1; d = 1.0;
    
    a = 45 + 43 % 5 * (23 * 3 % 2);
    cout << "Value of a is " << a << endl;

    //iv)
    a = 1, d = 1.0;

    a %=3 / a + 3;
    cout << "Value of a is " << a << endl;

    //v)
    a = 1, d = 1.0;

    d += 1.5 * 3 + (++a);
    cout << "Value of d is " << d << endl;

    //vi)
    a = 1, d = 1.0;
    
    d -= 1.5 * 3 + a++;
    cout << "Value of d is " << d << endl;

    return 0;
    
}
