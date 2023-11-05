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
    
    //Check if the product of digits for the integer is an even or odd number
    if(product%2==0){
    	cout<< product << " is: " << "even number" << endl;
	}else{
		cout<< product << " is: " << "odd number" << endl;
	}

    // Check if the product of digits is a multiple of 3 and/or 5
    if (product%3==0 && product%5==0){
    	cout<<" The product of digits is multiples of 3 and 5"<< endl;
	}else if (product % 3 == 0) {
        cout << "The product of digits is a multiple of 3." << endl;
    }else if (product % 5 == 0) {
        cout << "The product of digits is a multiple of 5." << endl;
    }
    
    return 0;
}