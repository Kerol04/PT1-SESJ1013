#include <iostream>

using namespace std;

int main() {
  int inputNum;
  long product = 1;
  bool isEven = true;

  cout << "Enter an integer number: ";
  cin >> inputNum;

  do {
    int digit = inputNum % 10;
    product *= digit;
    inputNum /= 10;

    if (digit % 2 != 0) {
      isEven = false;
    }
  } while (inputNum > 0);

  cout << "The product of digits is: " << product << endl;

  if (isEven) {
    cout << "The product of digits is an even number." << endl;
  } else {
    cout << "The product of digits is an odd number." << endl;
  }

  if (product % 3 == 0) {
    cout << "The product of digits is a multiple of 3." << endl;
  } else {
    cout << "The product of digits is not a multiple of 3." << endl;
  }

  if (product % 5 == 0) {
    cout << "The product of digits is a multiple of 5." << endl;
  } else {
    cout << "The product of digits is not a multiple of 5." << endl;
  }

  return 0;
}
