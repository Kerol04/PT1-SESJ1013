#include <iostream>
#include <string>
using namespace std;

double Calc(int a, double h , double w) {
    double result = ((10 * w) + (6.25 * h) - (5 * a) - 161);
    return result;
}

double calc(int a, double h , double w) {
    double result = ((10 * w) + (6.25 * h) - (5 * a) + 5);
    return result;
}

int main()
{
    int age;
    double height,weight;
    string gender;
    
    cout <<"please enter your age :";
    cin >> age;
    while (age <15 || age>80){
        cout <<"please provide age between 15 and 80"<<endl;
        cout <<"please enter your age :";
        cin >> age;
    }
    cout <<"please enter your height:";
    cin >> height;
    while (height <0){
        cout <<"please provide positive height value"<<endl;
        cout <<"please enter your height :";
        cin >> height;
    }
    cout <<"please enter your weight:";
    cin >> weight;
    while (weight<0){
        cout <<"please provide positive weight value"<<endl;
        cout <<"please enter your weight :";
        cin >> weight;
    }
    cout <<"please enter your gender :";
    cin >> gender;
    
    if (gender == "male"){
        double BMR = Calc(age, height, weight);
        double lightExercise = BMR * 1.375;
        double moderateExercise = BMR * 1.55;
        double hardExercise = BMR * 1.725;

        cout << "BMR: " << BMR << endl;
        cout << "Calories for light exercise (1-3 days/week): " << lightExercise << endl;
        cout << "Calories for moderate exercise (3-5 days/week): " << moderateExercise << endl;
        cout << "Calories for hard exercise (6-7 days/week): " << hardExercise << endl;
    }
    else if (gender == "female"){
        double BMR = calc(age, height, weight);
        double lightExercise = BMR * 1.375;
        double moderateExercise = BMR * 1.55;
        double hardExercise = BMR * 1.725;

        cout << "BMR: " << BMR << endl;
        cout << "Calories for light exercise (1-3 days/week): " << lightExercise << endl;
        cout << "Calories for moderate exercise (3-5 days/week): " << moderateExercise << endl;
        cout << "Calories for hard exercise (6-7 days/week): " << hardExercise << endl;
    }
    
    return 0;
}