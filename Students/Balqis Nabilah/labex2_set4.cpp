#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter an integer number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "\nEnter an integer number: ";
        cin >> num; 
    }

    // Calculate the product of the digits
    int product = 1;
    while (num > 0) {
        int digit = num % 10;
        product *= digit;
        num /= 10;
        cout << digit;
        if (num > 0) {
            cout << " * ";
        }
    }

    cout << " = " << product << endl; 

    // Check if the product is even or odd and the product of digits is a multiple of 3 and/or 5
    if  (product % 2 == 0 && product % 3 == 0 && product % 5 == 0) {
        cout << product;
        cout << " is an even number and multiple of 3 and 5" << std::endl;
    } 
    else if  (product % 2 == 0 && product % 3 != 0 && product % 5 == 0) {
        cout << product;
        cout << " is an even number and multiple of 5" << std::endl;
    }
    else if  (product % 2 == 0 && product % 3 == 0 && product % 5 != 0) {
        cout << product;
        cout << " is an even number and multiple of 3" << std::endl;
    }
    else if  (product % 2 == 0 && product % 3 != 0 && product % 5 != 0) {
        cout << product;
        cout << " is an even number" << std::endl;
    }
    else if  (product % 2 != 0 && product % 3 == 0 && product % 5 == 0) {
        cout << product;
        cout << " is an odd number and multiple of 3 and 5" << std::endl;
    } 
    else if  (product % 2 != 0 && product % 3 != 0 && product % 5 == 0) {
        cout << product;
        cout << " is an odd number and multiple of 5" << std::endl;
    }
    else if  (product % 2 != 0 && product % 3 == 0 && product % 5 != 0) {
        cout << product;
        cout << " is an odd number and multiple of 3" << std::endl;
    }
    else if  (product % 2 != 0 && product % 3 != 0 && product % 5 != 0) {
        cout << product;
        cout << " is an odd number" << std::endl;
    }

    return 0;
}