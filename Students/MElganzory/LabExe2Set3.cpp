#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter an integer number: ";
    cin >> number; // Asks the user to enter an integer from the user

    int product = 1 ;

    while (number > 0) {
        product = product *(number % 10);
        number = number /10;
    }

    // From here we start to check if the product is a multiple of 4, 5, and/or 7
    if (product % 4 == 0) {
        cout << "The product is a multiple of 4." << endl;
    }
    if (product % 5 == 0) {
        cout << "The product is a multiple of 5." << endl;
    }
     if (product % 7  == 0) {
        cout << "The product is a multiple of 7." << endl;
    }
    return 0;
}
