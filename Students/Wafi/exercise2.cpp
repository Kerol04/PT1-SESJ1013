#include <iostream>
using namespace std;

int main() {
    int a = 1;
    double d = 1.0;

    a = 46 / 9;
    cout << "Answer:" << a << endl;  // reset a = 1
    a = 1;
    a = 46 % 9 + 4 * 4 - 2;
    cout << "Answer:" << a << endl;  // reset a = 1
    a = 1;
    a = 45 + 43 % 5 * (23 * 3 % 2);
    cout << "Answer:" << a << endl;  // reset a = 1
    a = 1;
    a %= 3 / a + 3;
    cout << "Answer:" << a << endl;  // reset a = 1, d = 1.0
    a = 1, d = 1.0;
    d += 1.5 * 3 + (++a);
    cout << "Answer:" << d << endl;  // reset a = 1, d = 1.0
    a = 1,d = 1.0;
    d -= 1.5 * 3 + a++;
    cout << "Answer:" << d << endl;
    return 0;
}