#include <iostream>

using namespace std;

int calculateProductOfDigits(int num) {
    int product = 1;
    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }
    return product;
}

int main() {
    int num;
    cout << "Enter an integer number: ";
    cin >> num;

    int productOfDigits = calculateProductOfDigits(num);

    cout << "Product of digits for the integer " << num << " is " << productOfDigits << ".\n";

    if (productOfDigits % 2 == 0) {
        cout << "The product of digits is an even number.\n";
    } else {
        cout << "The product of digits is an odd number.\n";
    }

    if (productOfDigits % 3 == 0) {
        cout << "The product of digits is a multiple of 3.\n";
    }
    if (productOfDigits % 5 == 0) {
        cout << "The product of digits is a multiple of 5.\n";
    }

    return 0;
}