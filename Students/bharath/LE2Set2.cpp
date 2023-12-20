#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter an integer number: ";
    cin >> n;

    int m = n;

    
    cout << n << " = ";
    while (m > 0) {
        int rem = m % 10;
        sum = sum + rem;
        cout << rem;
        m = m / 10;
        if (m > 0) {
            cout << " + ";
        }
    }

    cout << " = " << sum << endl;

    if (sum % 2 == 0) {
        cout << sum << " is an even number";
        if (sum % 4 == 0) {
            cout << " & multiple of 4";
        }
        if (sum % 5 == 0) {
            cout << " & multiple of 5";
        }
        cout << endl;
    } else {
        cout << sum << " is an odd number" << endl;
    }

    return 0;
}
