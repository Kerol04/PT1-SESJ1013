#include <iostream>
using namespace std;

int main() {
    int number, digit, product = 1;

    cout << "Enter an integer number: ";
    cin >> number;

    // Kira Hasil darab
    digit = number % 10;
    cout << digit;
    product = product * digit;
    number = number / 10;

    do {
        digit = number % 10;
        cout << " * " << digit;
        product = product * digit;
        number = number / 10;
    } while (number != 0);

    cout << " = " << product << endl;

    // check sama ada odd atau even number
    if (product % 2 == 0){
        cout << product << " is even number" << endl;
    }

    else{ 
        cout << product << " is odd number" << endl;
    }

    // check sama ada multiple(s) of 3 dan/atau 5
    if (product % 3 == 0 && product % 5 == 0){
        cout << product << " is multiples of 3 and 5" << endl;
    }

    else if (product % 3 == 0){
        cout << product << " is multiples of 3" << endl;
    }

    else if (product % 5 == 0) {
        cout << product << " is multiples of 5" << endl;
    }
  


    return 0;
}