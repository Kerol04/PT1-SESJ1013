#include <iostream>

using namespace std;

int main() {
    int number;
    int sum = 0;

    // Read an integer number from the user
    cout << "Enter an integer number: ";
    cin >> number;

    int originalNumber = number; // Store the original number to print its digits

    // Calculate the sum of digits
        do {
        int digit = number % 10;
        sum += digit;
        number /= 10;
        cout << digit;
        if (number != 0)
        cout << " + ";
        else 
        cout << " = " << sum << endl;
        }
        while (number != 0);
        
        if (sum%3 == 0 && sum%4 == 0 && sum%5 == 0){
            cout <<sum << " is multiples of 3, 4 and 5";
        }
        else if (sum%3 == 0 && sum%4 == 0){
            cout <<sum << " is multiples of 3 and 4";
        }
        else if (sum%4 == 0 && sum%5 == 0){
            cout <<sum << " is multiples of 4 and 5";
        }
        else if (sum%5 == 0){
            cout <<sum << " is multiples of 5";
        }
        return 0;
 }
