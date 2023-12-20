#include <iostream>
using namespace std;

int main() {
  int number, sumOfDigits = 0, digit;


  cout << "Enter an integer number: ";
  cin >> number;


  while (number > 0) {
    digit = number % 10;
    sumOfDigits += digit;
    number /= 10;
  }


  if (sumOfDigits % 2 == 0) {
    cout << "The sum of digits is even." << endl;
  } else {
    cout << "The sum of digits is odd." << endl;
  }


  if (sumOfDigits % 4 == 0) {
    cout << "The sum of digits is a multiple of 4." << endl;
  } else {
    cout << "The sum of digits is not a multiple of 4." << endl;
  }


  if (sumOfDigits % 5 == 0) {
    cout << "The sum of digits is a multiple of 5." << endl;
  } else {
    cout << "The sum of digits is not a multiple of 5." << endl;
  }

  return 0;
}