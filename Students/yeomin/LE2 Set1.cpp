#include <iostream>
using namespace std;

int main() 
{
    int number;
    int sum=0;
    cout << "Enter an integer number: ";
    cin >> number;

    do
	{
    	sum += number % 10;
        number /= 10;
	}
	while (number>0);
       
    cout << "Sum of the digits of " << number << " is: " << sum << endl;

    // Check if the sum is a multiple of 3, 4, and/or 5
    if (sum % 3 == 0) {
        cout << sum << "is a mutiple of 3" << endl;
    }
    else if (sum % 4 == 0) {
        cout << sum << "is a mutiple of 4" << endl;
    }
    else if (sum % 5 == 0) {
        cout << sum << "is a mutiple of 5" << endl;
    }
    else if (sum%3==0 && sum%4==0){
    	cout << sum << "is a mutiple of 3 and 4." << endl;
	}
    else if (sum%3==0 && sum%5==0){
	    cout << sum << "is a mutiple of 3 and 5." << endl;
    }
    else if (sum%4==0 && sum%5==0){
    	cout << sum << "is a mutiple of 4 and 5." << endl;
    }

    return 0;
}