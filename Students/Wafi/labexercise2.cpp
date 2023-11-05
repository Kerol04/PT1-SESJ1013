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
        while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
        cout << digit;
        if (number != 0)
        cout << " + ";
        else 
        cout << " = " << sum << endl;
        }
        
        
        if (sum%2 != 0 && sum%4 != 0 && sum%5 != 0 ){
            cout <<sum << " is odd number";
        }
        else if (sum%2 != 0 && sum%5 == 0){
            cout <<sum << " is odd number & multiples of 5";
        }
        else if (sum%2 == 0 && sum%4 == 0 && sum%5 == 0){
            cout <<sum << " is even number & multiples of 4 and 5";
        }
        else if (sum%2 == 0 && sum%4 == 0){
            cout <<sum << " is even number & multiples of 4";
        }
        return 0;
 }