#include <iostream>
using namespace std;
int main() {
    int num, digit, sum = 0;

    cout <<"Enter an integer number: ";
    cin >>num;

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;}

    int originalSum = sum; 

    cout << "The sum of digits is: " << originalSum <<endl;

    if (sum % 2 == 0) {
        cout << sum << " is even number" << endl;
    } else {
        cout << sum << " is odd number" << endl;
    }
    
    if (originalSum % 4 == 0) {
        cout << "a multiple of 4"<<endl;
    }
    
    if (originalSum % 5 == 0) {
        cout << "a multiple of 5"<<endl;
    }
 cout << endl;

    system("pause");
    return 0;
}