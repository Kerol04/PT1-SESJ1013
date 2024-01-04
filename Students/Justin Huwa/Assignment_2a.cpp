#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    int age, height, weight, bmr;
	double bmr1, bmr2, bmr3, bmr4, bmr5, bmr6;
	char gender, choice;

    do
	{
	cout<<"Enter age in years: ";
	cin>>age;
	cout<<"Enter gender(M/F): ";
	cin>>gender;
	cout<<"Enter height in cm: ";
	cin>>height;
	cout<<"Enter weight in kg: ";
	cin>>weight;
	

	if(age < 15 or age > 80){
		cout<< "Enter age between 15 to 80" << endl;
	}
    if(gender == 'M' || gender == 'm'){
        bmr = 88.362 + (13.397*weight) + (4.799*height) - (5.677*age);
		cout<<"BMR= "<<bmr<<" calories per day"<<endl;
    }
    if(gender == 'F' || gender == 'f'){
		bmr = 447.593 + (9.247*weight) + (3.098*height) - (4.330*age);
		cout<<"BMR= "<<bmr<<" calories per day"<<endl;
	}
    bmr1 = bmr*1.2;
    bmr2 = bmr*1.375;
    bmr3 = bmr*1.465;
    bmr4 = bmr*1.55;
    bmr5 = bmr*1.725;
    bmr6 = bmr*1.9;

    cout << "Sedentary: little or no exercise = " << bmr1 << endl;
    cout << "Exercise 1-3 times/week = " << bmr2 << endl;
    cout << "Exercise 4-5 times/week = " << bmr3 << endl;
    cout << "Daily exercise or intense exercise 3-4 times/week = " << bmr4 << endl;
    cout << "Intense exercise 6-7 times/week = " << bmr5 << endl;
    cout << "Very intense exercise daily, or physical job = " << bmr6 << endl;
	cout<<"Calculate another BMR(Y/N): ";
	cin>>choice;

	} while (choice=='Y'||choice=='y');

	return 0;
}
