#include <iostream>
using namespace std;

int main() {
    int num, digit, product = 1;
    cout << "Enter an integer number: ";
    cin >> num;
    do {
        digit = num % 10;
        product *= digit;
        num /= 10;
    } while (num != 0);
    cout << "Product of digits: " << product << endl;
    if (product % 2 == 0) {
        cout <<product<<"is even number";
    } else {
        cout <<product<<"is odd number";}
    if (product % 3 == 0&&product%5==0){
    	cout<<" and multiples of 3 and 5"<<endl;
	}
    else if (product % 3 == 0) {
        cout <<" and multiple of 3" << endl;
    }
    else if (product % 5 == 0) {
        cout <<" and multiple of 5" << endl;
    }
    return 0;
}
