#include <iostream>
#include <iomanip>
using namespace std;

void activitylevel (double bmr){
    double AL_1, AL_2,AL_3,AL_4,AL_5,AL_6;

    AL_1 = bmr*1.2;
    AL_2 = bmr*1.3;
    AL_3 = bmr*1.4;
    AL_4 = bmr*1.5;
    AL_5 = bmr*1.7;
    AL_6 = bmr*1.9;

    cout << fixed << setprecision(2);
    cout << "Sedentary: littile or no exercise \t\t\t" << AL_1 << endl;
    cout << "Exercise 1-3 times/week \t\t\t\t" << AL_2 << endl;
    cout << "Exercise 4-5 times/week \t\t\t\t" << AL_3 << endl;
    cout << "Daily exercise or intense exercise 3-4 times/week \t" << AL_4 << endl;
    cout << "Intense exercise 6-7 times/week \t\t\t" << AL_5 <<endl;
    cout << "Very intense exercise daily, or physical job \t\t" << AL_6; 
}

int main (){
    int age;
    double height, weight, bmr;
    char gender;
    bool age_tf = true, gender_tf = true;

    do{ 
        cout << "Age : ";
        cin >> age;

        if (!(age >= 15 && age <=80)){
            age_tf = false;
            cout << "BMR calculation is only eligible to people age 15-80. \n";
        }else{
            age_tf = true;
        }

    }while(age_tf==false);
   
    do{
        cout << "Gender(M/F) : ";
        cin >> gender;
            
        cout << "Height : ";
        cin >> height;

        cout << "Weight : ";
        cin >> weight;

        if (gender == 'M' || gender == 'm'){
            gender_tf = true;
            bmr = 10*weight + 6.25*height - 5*age +5;
        }else if (gender == 'F' || gender == 'f'){
            gender_tf = true;
            bmr = 10*weight + 6.25*height - 5*age -161;
        }else{
            gender_tf = false;
            cout << "Gender invalid. Please reenter your gender \n";
        }
    } while (gender_tf == false);

    cout << "BMR = " << bmr <<" Calories/day \n\n" << endl;
    cout << "Daily calorie needs based on activity level \n";
    cout << "Activity level : \t\t\t\t\t" << "calorie \n" ;

    activitylevel(bmr);

    return 0;
}