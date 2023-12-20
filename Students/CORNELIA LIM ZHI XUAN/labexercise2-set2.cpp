#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer number: ";
    cin >> number;

    int sum = 0;
    int originalNumber = number;

    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    cout << "Sum of digits for " << originalNumber << ": ";
    
    while (originalNumber != 0) {
        int digit = originalNumber % 10;
        cout << digit;
        originalNumber /= 10;
        if (originalNumber != 0) {
            cout << " + ";
        }
    }

    cout << " = " << sum << endl;

    if (sum % 2 == 0) {
        cout << sum << " is even number." << endl;
    } else {
        cout << sum << " is odd number." << endl;
    }

    if (sum % 4 == 0) {
        cout << sum << " is a multiple of 4." << endl;
    }
    if (sum % 5 == 0) {
        cout << sum << " is a multiple of 5." << endl;
    }

    return 0;
}
