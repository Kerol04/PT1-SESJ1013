#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout << "Enter an integer number: ";
    cin >> number;

    int sum = 0; 
    while (number>0) {
        sum += number % 10;
        number /= 10;
    }

    cout << "Sum of the digits of " << number << " is: " << sum << endl;
    
    //Check if the sum of digits for the integer is an even or odd number
    bool isEven=(sum%2==0);
    bool isOdd=(sum%2!=0);

    if(isEven){
    	cout<< sum << " is: " << "even number" << endl;
	}else{
		cout<< sum << " is: " << "odd number" << endl;
	}
	
	// Check if the sum is a multiple of 4, and/or 5
    if (sum % 4 == 0) {
        cout << "The sum of digits is a multiple of 4." << endl;
    }
    else if (sum % 5 == 0) {
        cout << "The sum of digits is a multiple of 5." << endl;   
    }
    else if (sum%4==0 && sum%5==0) {
	    cout << "The sum of digits is a mutiple of 4 and 5." << endl;
	}

    return 0;
}
