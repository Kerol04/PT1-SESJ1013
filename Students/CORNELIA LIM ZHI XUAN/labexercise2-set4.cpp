#include <iostream>

int main() {
    // Declare variables
    int number, digit, product = 1;

    // Read an integer number from the user
    std::cout << "Enter an integer number: ";
    std::cin >> number;

    // Calculate the product of digits
    int originalNumber = number;
    std::cout << originalNumber << " = ";

    while (number != 0) {
        digit = number % 10;
        product *= digit;
        std::cout << digit;

        number /= 10;
        if (number != 0) {
            std::cout << " * ";
        }
    }

    std::cout << " = " << product << std::endl;

    // Check if the product is even or odd
    std::cout << product << " is ";
    if (product % 2 == 0) {
        std::cout << "even";
    } else {
        std::cout << "odd";
    }

    // Check for multiples of 3 and 5
    std::cout << " number & multiples of ";
    if (product % 3 == 0) {
        std::cout << "3";
    }

    if (product % 3 == 0 && product % 5 == 0) {
        std::cout << " and ";
    }

    if (product % 5 == 0) {
        std::cout << "5";
    }

    std::cout << std::endl;

    return 0;
}

