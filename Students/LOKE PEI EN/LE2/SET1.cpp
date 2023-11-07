#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter an integer number: ";
    cin >> n;

    int m = n;

    cout << "Individual digits: ";
    
    do {
        int rem = m % 10;
        sum += rem;
        m = m / 10;
        
        if (m != 0) {
            cout << rem << " + ";
        } else {
            cout << rem << " = " << sum << endl;
        }
    } while (m != 0);


    if (sum % 3 == 0) {
        cout << sum << " is a multiple of 3" << endl;
    }

    if (sum % 4 == 0) {
        cout << sum << " is a multiple of 4" << endl;
    }
    if (sum % 5 == 0) {
        cout << sum << " is a multiple of 5" << endl;
    }
    

    return 0;
}

