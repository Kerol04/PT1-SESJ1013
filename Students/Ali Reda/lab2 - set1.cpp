#include <iostream>

using namespace std;

int main() {
  int number;
  int sumOfDigits = 0;


  cout << "Enter an integer number: ";
  cin >> number;


  while (number > 0) {
    int digit = number % 10;
    sumOfDigits += digit;
    number /= 10;
  }

  cout << sumOfDigits << " ";

  if (sumOfDigits % 3 == 0) {
    cout << "is a multiple of 3";
  }

  if (sumOfDigits % 4 == 0) {
    cout << ", is a multiple of 4";
  }

  if (sumOfDigits % 5 == 0) {
    cout << ", is a multiple of 5";
  }

  cout << endl;

  return 0;
}