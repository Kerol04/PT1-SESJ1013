#include <iostream>

using namespace std;

int main() {
  long inputNum;
  int product = 1;

  cout << "Enter an integer number: ";
  cin >> inputNum;

  while (inputNum > 0) {
    int digit = inputNum % 10;
    product *= digit;
    inputNum /= 10;
  }

  cout << "The product of digits is: " << product << endl;

  if (product % 4 == 0) {
    cout << "The product of digits is a multiple of 4." << endl;
  } else {
    cout << "The product of digits is not a multiple of 4." << endl;
  }

  if (product % 5 == 0) {
    cout << "The product of digits is a multiple of 5." << endl;
  } else {
    cout << "The product of digits is not a multiple of 5." << endl;
  }

  if (product % 7 == 0) {
    cout << "The product of digits is a multiple of 7." << endl;
  } else {
    cout << "The product of digits is not a multiple of 7." << endl;
  }

  return 0;
}
