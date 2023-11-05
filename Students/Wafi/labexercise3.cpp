#include <iostream>

using namespace std;

int main() {
    int number;
    int multiply = 1;

    // Read an integer number from the user
    cout << "Enter an integer number: ";
    cin >> number;

    int originalNumber = number; // Store the original number to print its digits

    // Calculate the multiply of digits
        while (number != 0) {
        int digit = number % 10;
        multiply *= digit;
        number /= 10;
        cout << digit;
        if (number != 0)
        cout << " * ";
        else 
        cout << " = " << multiply << endl;
        }
        
        
        if (multiply%7 == 0 && multiply%5 == 0){
            cout <<multiply << " is multiples of 7 and 5";
        }
        else if (multiply%7 == 0 && multiply%4 == 0){
            cout <<multiply << " is multiples of 7 and 4";
        }
        else if (multiply%4 == 0 && multiply%5 ==0){
            cout <<multiply << " is multiples of 4 and 5";
        }
        else if (multiply%4 == 0){
            cout <<multiply << " is multiples of 4";
        }
        return 0;
 }