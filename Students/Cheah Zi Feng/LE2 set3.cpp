#include <iostream>
using namespace std;

int main() {
    int num, digit, product = 1;
    cout << "Enter an integer number:";
    cin >> num;
    while (num != 0) {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }
    cout << "Product of digits: " << product << endl;
    if (product % 4 == 0 || product % 5 == 0 || product % 7 == 0) {
    	cout<<product<<" is multiples of ";}
    if (product % 4 == 0) {
        cout <<"4"<< endl;
    }
    if (product % 5 == 0) {
        cout<<"5" << endl;
    }
    if (product % 7 == 0) {
        cout<<"7" << endl;
    }
    return 0;
}
