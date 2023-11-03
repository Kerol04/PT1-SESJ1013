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
    do {
        int digit = num % 10;
        product *= digit;
        num /= 10;
        cout << digit;
        if (num > 0) {
            cout << " * ";
        }
    } while (num > 0);

    cout << " = " << product << endl; 

    // Check if the product of digits is a multiple of 3, 4, and/or 5
    if  (product % 4 == 0 && product % 5 == 0 && product % 7 == 0) {
        cout << product;
        cout << " is a multiple of 4, 5 and 7" << std::endl;
    } 
    else if  (product % 4 == 0 && product % 5 == 0) {
        cout << product;
        cout << " is a multiple of 4 and 5" << std::endl;
    }
    else if  (product % 4 == 0 && product % 7 == 0) {
        cout << product;
        cout << " is a multiple of 4 and 7" << std::endl;
    }
    else if  (product % 5 == 0 && product % 7 == 0) {
        cout << product;
        cout << " is a multiple of 5 and 7" << std::endl;
    }
    else if  (product % 7 == 0) {
        cout << product;
        cout << " is a multiple of 7" << std::endl;
    }
    else if  (product % 4 == 0) {
        cout << product;
        cout << " is a multiple of 4" << std::endl;
    }
    else if (product % 5 == 0) {
        cout << product;
        cout << " is a multiple of 5" << std::endl;
    }

    return 0;
}