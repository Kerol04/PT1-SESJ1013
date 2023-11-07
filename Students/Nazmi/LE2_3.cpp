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

    // check sama ada multiple(s) of 4, 5 dan/atau 7
    if (product % 4 == 0 && product % 5 == 0){
    cout << product << " is multiples of 4 and 5" << endl;
    }

    else if (product % 4 == 0 && product % 7 == 0){
    cout << product << " is multiples of 7 and 4" << endl;
    }

    else if (product % 5 == 0 && product % 7 == 0){
    cout << product << " is multiples of 7 and 5" << endl;
    }

    else if (product % 4 == 0 && product % 5 == 0 && product % 7 == 0){
    cout << product << " is multiples of 4, 5 and 7";
    }

    else if (product % 4 == 0){
    cout << product << " is multiples of 4" << endl;
    }

    else if (product % 5 == 0){
    cout << product << " is multiples of 5" << endl;
    }

    else if (product % 7 == 0) {
    cout << product << " is multiples of 7" << endl;
    }
  
    else{
    cout << product << " is not multiples of 4, 5, and 7" << endl;
    }



    return 0;
}