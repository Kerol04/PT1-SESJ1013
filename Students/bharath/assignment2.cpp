#include <iostream>
#include <iomanip>
using namespace std;


void activitylevel(double BMR){
    double bmr1, bmr2, bmr3, bmr4, bmr5, bmr6;
    bmr1 = BMR * 1.2;
    bmr2 = BMR * 1.3;
    bmr3 = BMR * 1.4;
    bmr4 = BMR * 1.5;
    bmr5 = BMR * 1.7;
    bmr6 = BMR * 1.9;

    cout << fixed << setprecision(2);
    cout << "Sedentary: little or no exercise = " << bmr1 << endl;
    cout << "Exercise 1-3 times/week = " << bmr2 << endl;
    cout << "Exercise 4-5 times/week = " << bmr3 << endl;
    cout << "Daily exercise or intense exercise 3-4 times/week = " << bmr4 << endl;
    cout << "Intense exercise 6-7 times/week = " << bmr5 << endl;
    cout << "Very intense exercise daily, or physical job = " << bmr6 << endl;
    
}

int main(){
    int Age;
    double Height, Weight, BMR;
    char Gender;
    bool b_age = true, b_gender = true;

    do {
        cout << "Enter age: ";
        cin >> Age;

        if (!(Age >= 15 && Age <= 80)){
            b_age = false;
            cout << "BMR calculation is only eligible to people age 15-80." <<endl;
        } else {
            b_age = true;
        }
    } while (b_age == false);

    do {
        cout << "Please enter gender (M/F): ";
        cin >> Gender;
        cout << "Please enter height in cm: ";
        cin >> Height;
        cout << "Please enter your weight in kg: ";
        cin >> Weight;

        if (Gender == 'M'  Gender == 'm'){
            b_gender = true;
            BMR = 10 * Weight + 6.25 * Height - 5 * Age + 5;
        } else if (Gender == 'F'  Gender == 'f') {
            b_gender = true;
            BMR = 10 * Weight + 6.25 * Height - 5 * Age - 161;
        } else {
            b_gender = false;
            cout << "Gender is invalid.Please enter your gender again." <<endl;
        }
    } while (b_gender == false);

    cout << "\nBMR = " << BMR << " Calories/day" <<endl;
    cout << "Daily calorie needs based on activity level" <<endl;
    cout << "Activity level: " <<endl;
    activitylevel(BMR);

    return 0;
}
