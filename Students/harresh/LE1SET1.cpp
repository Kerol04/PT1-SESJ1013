#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer number: ";
    cin >> num;

    int originalNum = num;
    int sum = 0;

    // Calculate the sum of digits
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << "Sum of digits for " << originalNum << " is: " << sum << endl;

    // Check if the sum is a multiple of 3, 4, and/or 5
    bool multipleOf3 = (sum % 3 == 0);
    bool multipleOf4 = (sum % 4 == 0);
    bool multipleOf5 = (sum % 5 == 0);

    if (multipleOf3) {
        cout << sum << " is a multiple of 3." << endl;
    }
    if (multipleOf4) {
        cout << sum << " is a multiple of 4." << endl;
    }
    if (multipleOf5) {
        cout << sum << " is a multiple of 5." << endl;
    }

    if (!multipleOf3 && !multipleOf4 && !multipleOf5) {
        cout << sum << " is not a multiple of 3, 4, or 5." << endl;
    }

    return 0;
}
