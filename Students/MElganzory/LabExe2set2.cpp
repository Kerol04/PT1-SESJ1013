#include <iostream>
using namespace std;
int main() {
    int number;

    cout << "Enter Only a positive integer number: ";
    cin >> number; // Asks the user to enter a positive integer from the user

    int sumOfDigits = 0;

    while (number > 0) {
        sumOfDigits = sumOfDigits + (number % 10);
        number = number / 10;
    }
    cout << "The sum of the digits is: " << sumOfDigits << endl;
    if (sumOfDigits % 2 == 0) {
        cout << "The sum is even." << endl;
    } else {
        cout << "The sum is odd." << endl;
    }

    // From here we start to check if the sum is a multiple of 4 and/or 5
    if (sumOfDigits % 4 == 0) {
        cout << "The sum is a multiple of 4." << endl;
    }
    if (sumOfDigits % 5 == 0) {
        cout << "The sum is a multiple of 5." << endl;
    }
    return 0;
}
