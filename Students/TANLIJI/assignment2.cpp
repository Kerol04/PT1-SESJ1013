#include <iostream>
#include <string>
using namespace std;
void ActivitiesLevel();
int bmr;
int main(){
    int age;
    do{cout<< "Enter age your age between 15 and 80:"<<endl;
    cin>>age;
    } while(age<15 || age<80);
    

    string gender;
    double height;
    double weight;
    cout<<"Please enter yout gender (M/F):"<<endl;
    cin>>gender;
    if (gender =="M"){
        bmr = 10*weight + 6.25*height - 5*age + 5;
    } else if (gender=="F"){
        bmr = 10*weight + 6.25*height - 5*age - 161;
    }
    cout<<"Please enter your height in (Meter)"<<endl;
    cin>>height;
    cout<<"Please enter your weight (kg)"<<endl;
    cin>>weight;
    ActivitiesLevel();
return 0;


}
void ActivitiesLevel(){
    int bmr2 = 1.2*bmr;
    int bmr3 = 1.375*bmr;
    int bmr4 = 1.465*bmr;
    int bmr5 = 1.55*bmr;
    int bmr6 = 1.725*bmr;
    int bmr7 = 1.9* bmr;
    cout <<"---------------------------------------"<<endl;
    cout <<"Result"<<endl;
    cout <<"---------------------------------------"<<endl;
    cout << "BMR= "<< bmr << " Calories/day"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"Daily calorie needs based on activity level"<<endl;
    cout << "Exercise 1-3 times/week: " << bmr3 <<endl;
    cout << "Exercise 4-5 times/week: " << bmr4 <<endl;
    cout << "Daily exercise or intense exercise 6-7 times/week: " << bmr5 <<endl;
    cout << "Intense exercise 6-7 times/week: "<< bmr6 <<endl;
    cout << "Very intense exercise daily, or physical job:"<< bmr6 <<endl;
    cout <<"Exercise: 15-30 minutes of elevated heart rate activity.\nIntense exercise: 45-120 minutes of elevated heart rate activity.\nVery intense exercise: 2+ hours of elevated heart rate activity."<<endl;
}