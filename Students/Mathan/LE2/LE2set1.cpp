#include <iostream>

using namespace std;

int calculateSumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter an integer number: ";
    cin >> num;

    int sumOfDigits = calculateSumOfDigits(num);

    cout << "Sum of digits for the integer " << num << " is " << sumOfDigits << ".\n";

    if (sumOfDigits % 3 == 0) {
        cout << "The sum of digits is a multiple of 3.\n";
    }
    if (sumOfDigits % 4 == 0) {
        cout << "The sum of digits is a multiple of 4.\n";
    }
    if (sumOfDigits % 5 == 0) {
        cout << "The sum of digits is a multiple of 5.\n";
    }

    return 0;
}