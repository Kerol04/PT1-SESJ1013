#include <iostream>
#include <cmath>
using namespace std;

double bmrmale(double weight, double height, int age);
double bmrfemale(double weight, double height, int age);

int main(){
    int Age;
    char gender;
    double weight, height, BMR, sedentary, exercise13, exercise45, dailyexercise34, intexercise67, vintexercise;

    do{
        cout << "Please enter your age: ";
        cin >> Age;
        if (!(Age >= 15 && Age <= 80)){
            cout << "Wrong input!\n";
        }
    } while (!(Age >= 15 && Age <= 80));

    do{
        cout << "Please enter your gender (M/F): ";
        cin >> gender;
        if (!(gender == 'm' || gender == 'M' ||gender == 'F' ||gender == 'f')){
            cout << "Wrong input!\n";
        }
    } while (!(gender == 'm' || gender == 'M' ||gender == 'F' ||gender == 'f'));


    cout << "Please enter your height (cm): ";
    cin >> height;
    cout << "Please enter your weight (kg): ";
    cin >> weight;

    if(gender == 'm' || gender == 'M'){
        BMR = bmrmale(weight, height, Age);
    }else{
        BMR = bmrfemale(weight, height, Age);
    }

    cout << endl << round(BMR) << " Calories/day \n";

    sedentary = BMR*1.1996;
    cout << "\nSedentary: " << round(sedentary) << " calories \n";
    exercise13 = BMR*1.375;
    cout << "Exercise 1-3 times/week: " << round(exercise13) << " calories \n";
    exercise45 = BMR*1.464;
    cout << "Exercise 4-5 times/week: " << round(exercise45) << " calories \n";
    dailyexercise34 = BMR*1.549;
    cout << "Daily exercise or intense exercise 3-4 times/week: " << round(dailyexercise34) << " calories \n";
    intexercise67 = BMR*1.724;
    cout << "Intense exercise 6-7 times/week: " << round(intexercise67) << " calories \n";
    vintexercise = BMR*1.8995;
    cout << "Very intense exercise daily, or physical job: " << round(vintexercise) << " calories \n";


    system("pause");
    return 0;
}

double bmrmale(double weight, double height, int age){
    double result;

    result = (10*weight) + (6.25*height) - (5*age) + 5;

    return result;
}

double bmrfemale(double weight, double height, int age){
    double result;

    result = (10*weight) + (6.25*height) - (5*age) -161;

    return result;
}