#include <iostream>

int main() {
    int number, digit, sum = 0, multiple_of_4 = 0, multiple_of_5 = 0;

    std::cout << "Enter an integer number: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Error! Enter a positive integer number." << std::endl;
        return 0;
    }

    while (number != 0) {
        digit = number % 10;
        sum += digit;

        if (sum % 4 == 0) {
            multiple_of_4 = 1;
        }

        if (sum % 5 == 0) {
            multiple_of_5 = 1;
        }

        number /= 10;
    }

    if (sum % 2 == 0) {
        std::cout << "The sum of digits is even." << std::endl;
    } else {
        std::cout << "The sum of digits is odd." << std::endl;
    }

    if (multiple_of_4) {
        std::cout << "The sum of digits is a multiple of 4." << std::endl;
    }

    if (multiple_of_5) {
        std::cout << "The sum of digits is a multiple of 5." << std::endl;
    }

    return 0;
}