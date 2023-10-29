#include <iostream>
using namespace std;

int main()
{
    //declaration of variable
    int a = 1;
    double d = 1.0;
    //operation i
    a = 46/9;
    //display output i
    cout << a;
    // operation ii
    a = 46 % 9 + 4 * 4 - 2;
    //new line
    cout << "\n";
    //display output ii
    cout << a;
    //operation iii
    a = 45 + 43 % 5 * ( 23 * 3 % 2);
    //new line
    cout << "\n";
    //display output iii
    cout << a;
    //operation iv
    a %=3 / a + 3;
    cout << "\n";
    cout << a;
    //operation v
    d += 1.5 * 3 + (++a);
    cout << "\n";
    cout << d;
    //operation vi
    d -= 1.5 * 3 + a++;
    cout << "\n";
    cout << d;
    return 0;
}