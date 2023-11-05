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

    if (productOfDigits % 4 == 0) {
        cout << "The product of digits is a multiple of 4.\n";
    }
    if (productOfDigits % 5 == 0) {
        cout << "The product of digits is a multiple of 5.\n";
    }
    if (productOfDigits % 7 == 0) {
        cout << "The product of digits is a multiple of 7.\n";
    }

    return 0;
}