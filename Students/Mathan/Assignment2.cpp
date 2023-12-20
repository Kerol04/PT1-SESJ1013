#include <iostream>
#include <iomanip>
using namespace std;


void activitylevel(double BMR){
    double bmr_1, bmr_2, bmr_3, bmr_4, bmr_5, bmr_6;
    bmr_1 = BMR*1.2;
    bmr_2 = BMR*1.3;
    bmr_3 = BMR*1.4;
    bmr_4 = BMR*1.5;
    bmr_5 = BMR*1.7;
    bmr_6 = BMR*1.9;

    cout << fixed << setprecision(2);
    cout << "Sedentary: little or no exercise = " << bmr_1 << endl;
    cout << "Exercise 1-3 times/week = " << bmr_2 << endl;
    cout << "Exercise 4-5 times/week = " << bmr_3 << endl;
    cout << "Daily exercise or intense exercise 3-4 times/week = " << bmr_4 << endl;
    cout << "Intense exercise 6-7 times/week = " << bmr_5 << endl;
    cout << "Very intense exercise daily, or physical job = " << bmr_6 << endl;
    
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
        cout << "Please enter your gender (M/F): ";
        cin >> Gender;
        cout << "Please enter your height (cm): ";
        cin >> Height;
        cout << "Please enter your weight (kg): ";
        cin >> Weight;

        if (Gender == 'M'){
            b_gender = true;
            BMR = 10*Weight + 6.25*Height - 5*Age + 5;
        } else if (Gender == 'F') {
            b_gender = true;
            BMR = 10*Weight + 6.25*Height - 5*Age - 161;
        } else {
            b_gender = false;
            cout << "Gender invalid. Please enter your gender again." <<endl;
        }
    } while (b_gender == false);

    cout << "\nBMR = " << BMR << " Calories/day" <<endl;
    cout << "Daily calorie needs based on activity level" <<endl;
    cout << "Activity level: " <<endl;
    activitylevel(BMR);

    return 0;
}