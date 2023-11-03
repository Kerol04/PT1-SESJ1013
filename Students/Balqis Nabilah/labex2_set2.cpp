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
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
        cout << digit;
        if (num > 0) {
            cout << " + ";
        }
    }

    cout << " = " << sum << endl; 

    // Check if the sum is even or odd and the sum of digits is a multiple of 4 and/or 5
    if  (sum % 2 == 0 && sum % 4 == 0 && sum % 5 == 0) {
        cout << sum;
        cout << " is an even number and multiple of 4 and 5" << std::endl;
    } 
    else if  (sum % 2 == 0 && sum % 4 != 0 && sum % 5 == 0) {
        cout << sum;
        cout << " is an even number and multiple of 5" << std::endl;
    }
    else if  (sum % 2 == 0 && sum % 4 == 0 && sum % 5 != 0) {
        cout << sum;
        cout << " is an even number and multiple of 4" << std::endl;
    }
    else if  (sum % 2 == 0 && sum % 4 != 0 && sum % 5 != 0) {
        cout << sum;
        cout << " is an even number" << std::endl;
    }
    else if  (sum % 2 != 0 && sum % 4 == 0 && sum % 5 == 0) {
        cout << sum;
        cout << " is an odd number and multiple of 4 and 5" << std::endl;
    } 
    else if  (sum % 2 != 0 && sum % 4 != 0 && sum % 5 == 0) {
        cout << sum;
        cout << " is an odd number and multiple of 5" << std::endl;
    }
    else if  (sum % 2 != 0 && sum % 4 == 0 && sum % 5 != 0) {
        cout << sum;
        cout << " is an odd number and multiple of 4" << std::endl;
    }
    else if  (sum % 2 != 0 && sum % 4 != 0 && sum % 5 != 0) {
        cout << sum;
        cout << " is an odd number" << std::endl;
    }

    return 0;
}