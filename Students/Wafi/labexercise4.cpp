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
        do {
        int digit = number % 10;
        multiply *= digit;
        number /= 10;
        cout << digit;
        if (number != 0)
        cout << " * ";
        else 
        cout << " = " << multiply << endl;
        }
        while (number != 0);
        
        
        if (multiply%2 != 0 && multiply%3 == 0  && multiply%5 == 0){
            cout <<multiply << " is odd number & multiples of 3";
        }
        else if (multiply%2 == 0 && multiply%3 == 0  && multiply%5 == 0){
            cout <<multiply << " is even number & multiples of 3 and 5";
        }
        else if (multiply%2 == 0 && multiply%3 ==0){
            cout <<multiply << " is even number & multiples of 3";
        }
        else if (multiply%2 == 0){
            cout <<multiply << " is even number";
        }
        return 0;
 }