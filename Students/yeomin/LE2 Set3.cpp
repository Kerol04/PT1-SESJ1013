#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer number: ";
    cin >> number;
    
    // Initialize product to 1
    int product = 1; 

    // Calculate the product of digits
    while (number > 0) {
        product *= number % 10;
        number /= 10;
    }
    
    cout << "Product of the digits is: " << product << endl;

    // Check if the product of digits is a multiple of 4, 5, and/or 7
    if (product%4==0 && product%5==0){
    	cout<<" The product of digits is multiples of 4 and 5"<< endl;
    }	
    else if (product%4==0 && product%7==0){
    	cout<<" The product of digits is multiples of 4 and 7"<< endl;
	}  	
    else if (product%5==0 && product%7==0){
    	cout<<" The product of digits is multiples of 5 and 7"<< endl;
	}		
    else if (product % 4 == 0) {
        cout << "The product of digits is a multiple of 4." << endl;
    }
    else if (product % 5 == 0) {
        cout << "The product of digits is a multiple of 5." << endl;
    }
    else if (product % 7 == 0) {
        cout << "The product of digits is a multiple of 7." << endl;
    }

    return 0;
}