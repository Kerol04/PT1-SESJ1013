#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer number: ";
    cin >> number;

    int sum = 0;
    int originalNumber = number;

    do {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    } while (number != 0);

    cout << "Sum of digits for " << originalNumber << ": ";

    int temp = originalNumber;
    bool firstDigit = true;
    while (temp != 0) {
        int digit = temp % 10;
        cout << (firstDigit ? "" : " + ") << digit;
        temp /= 10;
        firstDigit = false;
    }

    cout << " = " << sum << endl;

    if (sum % 3 == 0) {
        cout << sum << " is a multiple of 3." << endl;
    }
    if (sum % 4 == 0) {
        cout << sum << " is a multiple of 4." << endl;
    }
    if (sum % 5 == 0) {
        cout << sum << " is a multiple of 5." << endl;
    }

    return 0;
}
