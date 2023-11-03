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

    // Calculate the sum of the digits
    int sum = 0;
    do {
        int digit = num % 10;
        sum += digit;
        num /= 10;
        cout << digit;
        if (num > 0) {
            cout << " + ";
        }
    } while (num > 0);

    cout << " = " << sum << endl; 

    // Check if the sum of digits is a multiple of 3, 4, and/or 5
    if  (sum % 3 == 0 && sum % 4 == 0 && sum % 5 == 0) {
        cout << sum;
        cout << " is a multiple of 3, 4 and 5" << std::endl;
    } 
    else if  (sum % 4 == 0 && sum % 5 == 0) {
        cout << sum;
        cout << " is a multiple of 4 and 5" << std::endl;
    }
    else if  (sum % 3 == 0 && sum % 5 == 0) {
        cout << sum;
        cout << " is a multiple of 3 and 5" << std::endl;
    }
    else if  (sum % 3 == 0 && sum % 4 == 0) {
        cout << sum;
        cout << " is a multiple of 3 and 4" << std::endl;
    }
    else if  (sum % 3 == 0) {
        cout << sum;
        cout << " is a multiple of 3" << std::endl;
    }
    else if  (sum % 4 == 0) {
        cout << sum;
        cout << " is a multiple of 4" << std::endl;
    }
    else if (sum % 5 == 0) {
        cout << sum;
        cout << " is a multiple of 5" << std::endl;
    }

    return 0;
}