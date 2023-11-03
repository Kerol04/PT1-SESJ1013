#include <iostream>
#include <cmath>
using namespace std;

double BMRMale(double weight_kg, double height_cm, int age);

double BMRFemale(double weight_kg, double height_cm, int age);

void activity_level(double BMR);

int main() {
    cout << "BMR Calculator" << endl;

    double weight_kg, height_cm;
    int age;
    string gender;

    do {
        cout << "Enter your age: ";
        cin >> age;
        if (age <= 15 || age >= 80) {
            cout << "Age must be between 15 and 80. Please try again." << endl;
        }
    } while (age <= 15 || age >= 80);

    cout << "Enter your weight in kilograms: ";
    cin >> weight_kg;
    cout << "Enter your height in centimeters: ";
    cin >> height_cm;
    cout << "Enter your gender (male/female): ";
    cin >> gender;

    double bmr=0;

    if (gender == "male") {
        bmr = BMRMale(weight_kg, height_cm, age);
    } else if (gender == "female") {
        bmr = BMRFemale(weight_kg, height_cm, age);
    } else {
        cout << "Invalid gender specified. Use 'male' or 'female'." << endl;
        return 1;  // Exit with an error code
    }

    cout << "Your Basal Metabolic Rate (BMR) is: " << bmr << " calories per day" << endl;
    
    activity_level(bmr);

    system("pause");
    return 0;
}
    
double BMRMale(double weight_kg, double height_cm, int age) {
    return (10 * weight_kg) + (6.25 * height_cm) - (5 * age) + 5;
}

double BMRFemale(double weight_kg, double height_cm, int age) {
    return (10 * weight_kg) + (6.25 * height_cm) - (5 * age) - 161;
}

void activity_level(double BMR){
    double BMR2= 1.2*BMR;
    double BMR3= 1.375*BMR;
    double BMR4= 1.465*BMR;
    double BMR5= 1.55*BMR;
    double BMR6= 1.725*BMR;
    double BMR7= 1.9*BMR;
    
    
    cout<< "Sedentary: little or no exercise: " << BMR2<< " calorie"<<
    endl;
    cout<< "Exercise 1-3 times/week: " << BMR3<<" calorie"<< endl;
    cout<< "Exercise 4-5 times/week: " << BMR4<<" calorie"<< endl;
    cout<< "Daily exercise or intense exercise 3-4 times/week: " << BMR5<<" calorie"<< endl;
    cout<< "Intense exercise 6-7 times/week: " << BMR6<<" calorie"<< endl;
    cout<< "Very intense exercise daily, or physical job: " << BMR7<<" calorie"<<endl;
}