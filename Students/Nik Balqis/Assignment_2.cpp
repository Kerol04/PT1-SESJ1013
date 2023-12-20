#include <iostream>
#include <iomanip>
using namespace std;

//Function
void activitylevel(double BMR){
    double AL_1, AL_2, AL_3, AL_4, AL_5, AL_6;
    AL_1 = BMR*1.2;
    AL_2 = BMR*1.3;
    AL_3 = BMR*1.4;
    AL_4 = BMR*1.5;
    AL_5 = BMR*1.7;
    AL_6 = BMR*1.9;

    cout << fixed << setprecision(2);
    cout << "Sedentary: little or no exercise = " << AL_1 << endl;
    cout << "Exercise 1-3 times/week = " << AL_2 << endl;
    cout << "Exercise 4-5 times/week = " << AL_3 << endl;
    cout << "Daily exercise or intense exercise 3-4 times/week = " << AL_4 << endl;
    cout << "Intense exercise 6-7 times/week = " << AL_5 << endl;
    cout << "Very intense exercise daily, or physical job = " << AL_6 << endl;
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
            cout << "BMR calculation is only eligible to people age 15-80.\n";
        } else {
            b_age = true;
        }
    } while (b_age == false);

    do {
        cout << "Enter gender (M/F): ";
        cin >> Gender;
        cout << "Enter height (cm): ";
        cin >> Height;
        cout << "Enter weight (kg): ";
        cin >> Weight;

        if (Gender == 'M' || Gender == 'm'){
            b_gender = true;
            BMR = 10*Weight + 6.25*Height - 5*Age + 5;
        } else if (Gender == 'F' || Gender == 'f') {
            b_gender = true;
            BMR = 10*Weight + 6.25*Height - 5*Age - 161;
        } else {
            b_gender = false;
            cout << "Gender invalid. Please reenter your gender.\n";
        }
    } while (b_gender == false);

    cout << "\nBMR = " << BMR << " Calories/day\n\n";
    cout << "Daily calorie needs based on activity level\n";
    cout << "Activity level: \n";
    activitylevel(BMR);

    return 0;
}