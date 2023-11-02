#include <iostream>
using namespace std;
int main() {
    int number;

    cout << "Enter a integer number: ";
    cin >> number; // Asks the user to enter a integer from the user

    int product = 1;

    while (number > 0) {
        product = product * (number % 10);
        number = number / 10;
    }
    cout << "The Product of the digits is: " << product << endl;
    if (product % 2 == 0) {
        cout << "The product is even." << endl;
    } else {
        cout << "The product is odd." << endl;
    }

    // From here we start to check if the product is a multiple of 3 and/or 5
    if (product % 3 == 0) {
        cout << "The sum is a multiple of 3." << endl;
    }
    if (product % 5 == 0) {
        cout << "The sum is a multiple of 5." << endl;
    }
    return 0;
}
