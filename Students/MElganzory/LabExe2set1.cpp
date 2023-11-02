#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter a positive integer number: ";
    cin >> number; // Asks the user to enter an integer from the user

    int sumOfDigits = 0;

    while (number > 0) {
        sumOfDigits = sumOfDigits + (number % 10);
        number = number / 10;
    }

    cout << "Sum of digits: " << sumOfDigits << endl;

    if (sumOfDigits % 3 == 0){
        cout << "The sum of digits is a multiple of 3." << endl;
    }
    else if (sumOfDigits % 4 == 0) {
        cout << "The sum of digits is a multiple of 4." << endl;
    }
    else if (sumOfDigits % 5 == 0){
        cout << "The sum of digits is a multiple of 5." << endl;
    }
    else
        cout << "The sum of digits is not a multiple of 3, 4, or 5." << endl;

    return 0;
}
