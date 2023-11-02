#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    int sum = 0;
    int number;

    cout << "Enter an integer number: ";
	cin >> number;
 
    while (number>0){
        sum += number % 10;
        number /= 10;
    }
    cout << "Sum of digits: "<< sum << endl;

    if(sum%4==0){
        cout<< "The sum of digits is a multiple of 4." << endl;
    }
    if(sum%5==0){
        cout<< "The sum of digits is a multiple of 5." << endl;
    }
    if(sum%7==0){
        cout<< "The sum of digits is a multiple of 7." << endl;
    }

    return 0;
}