#include <iostream>
using namespace std;

int main() {
    int number, digit, product = 1;

    cout << "Enter an integer number: ";
    cin >> number;

    int originalNumber = number;
    cout << originalNumber << " = ";

    while (number != 0) {
        digit = number % 10;
        product *= digit;
        cout << digit;

        number /= 10;
        if (number != 0) {
            cout << " * ";
        }
    }

    cout << " = " << product << endl;

    cout << product << " is multiples of ";
    bool isMultiple = false;

    if (product % 4 == 0) {
        cout << "4";
        isMultiple = true;
    }

    if (product % 5 == 0) {
        if (isMultiple) {
            cout << " and ";
        }
        cout << "5";
        isMultiple = true;
    }

    if (product % 7 == 0) {
        if (isMultiple) {
            cout << " and ";
        }
        cout << "7";
    }

    return 0;
}
