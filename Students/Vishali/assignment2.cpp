#include <iostream>
using namespace std;

void calculateBMR();

int main()
{
	calculateBMR();
	return 0;
}

void calculateBMR()
{
	int age, gender, activity_level;
	double height, weight, BMR;

	do
	{
		cout << "Enter your age (between 15 and 80): ";
		cin >> age;
		if (age < 15 || age > 80)
		{
			cout << "Invalid age. Age must be between 15 and 80." << endl;
		}
	} while (age < 15 || age > 80);

	cout << "Enter your height (in cm): ";
	cin >> height;
	cout << "Enter your weight (in kg): ";
	cin >> weight;

	cout << "Please select gender: " << endl;
	cout << "Press '1' for male\n";
	cout << "Press '2' for female\n";
	cin >> gender;

	if (gender == 1)
	{
		BMR = 10 * weight + 6.25 * height - 5 * age + 5;
	}
	else if (gender == 2)
	{
		BMR = 10 * weight + 6.25 * height - 5 * age - 161;
	}
	else
	{
		cout << "Invalid gender choice. Please select among the given options.\n";
		return;
	}

	cout << "Choose your activity level: \n";
	cout << "Press '1' for Sedentary: Little or no exercise\n";
	cout << "Press '2' for Exercise 1-3 times/week\n";
	cout << "Press '3' for Exercise 4-5 times/week\n";
	cout << "Press '4' for Daily exercise or intense exercise 3-4 times/week\n";
	cout << "Press '5' for Intense exercise 6-7 times/week\n";
	cout << "Press '6' for Very intense exercise daily or physical job\n";
	cin >> activity_level;

	switch (activity_level)
	{
	case 1:
		cout << "Your BMR is " << BMR * 1.2 << " kcal/day\n";
		break;
	case 2:
		cout << "Your BMR is " << BMR * 1.375 << " kcal/day\n";
		break;
	case 3:
		cout << "Your BMR is " << BMR * 1.465 << " kcal/day\n";
		break;
	case 4:
		cout << "Your BMR is " << BMR * 1.55 << " kcal/day\n";
		break;
	case 5:
		cout << "Your BMR is " << BMR * 1.725 << " kcal/day\n";
		break;
	case 6:
		cout << "Your BMR is " << BMR * 1.9 << " kcal/day\n";
		break;
	default:
		cout << "Invalid choice of activity level. Please select among the given options.\n";
	}
}
