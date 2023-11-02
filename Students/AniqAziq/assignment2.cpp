#include<iostream>
#include<string>
#include <cmath>
using namespace std;
double bmrmale(double W, double H, int A);
double bmrfemale(double W, double H, int A);

int main()
{
    int age;
    string gender;
    double height,weight,BMR,sedentary,resultsedentary,exercise13,exercise45,dailyexercise34
    ,intexercise67,vintexercise;

    do{
    cout<<"Enter Age : ";
    cin>>age;
    if (age<15 || age>80)
        cout<<"Age is not valid,Please Enter Again\n";
    }while(age<15 || age>80);

    do{
    cout<<"Enter gender(male or female) : ";
    cin>>gender;
    if(gender!="male" && gender!="female")
        cout<<"Gender must be male or female,Please Try Again\n";
    }while(gender!="male" && gender!="female");

    cout<<"Enter height(cm) : ";
    cin>>height;
    cout<<"Enter weight(kg) : ";
    cin>>weight;

    if (gender=="male"){
        BMR=bmrmale(weight,height,age);
        cout<<"BMR= "<<BMR<<" Calories/Day";

        sedentary=BMR*1.1996;
        resultsedentary=round(sedentary);
        exercise13 = round(BMR * 1.375);
        exercise45 = round(BMR * 1.464);
        dailyexercise34 = round(BMR * 1.549);
        intexercise67 = round(BMR * 1.724);
        vintexercise = round(BMR * 1.8995);
        cout<<"\n\nSedentary : "<<resultsedentary<<" Calories/Day";
        cout<<"\nExercise 1- 3 times/week: "<<exercise13<<" Calories/Day";
        cout<<"\nExercise 4- 5 times/week: "<<exercise45<<" Calories/Day";
        cout<<"\nDaily Exercise 3-4 times/week: "<<dailyexercise34<<" Calories/Day";
        cout<<"\nIntense Exercise 6-7 times/week: "<<intexercise67<<" Calories/Day";
        cout<<"\nVery Intense Exercise: "<<vintexercise<<" Calories/Day\n\n";
    }
    else{
        BMR=bmrfemale(weight,height,age);
        cout<<"BMR= "<<BMR<<" Calories/Day";

        sedentary=BMR*1.1997;
        resultsedentary=round(sedentary);
        exercise13 = round(BMR * 1.374);
        exercise45 = round(BMR * 1.464);
        dailyexercise34 = round(BMR * 1.550);
        intexercise67 = round(BMR * 1.724);
        vintexercise = round(BMR * 1.8995);
        cout<<"\n\nSedentary : "<<resultsedentary<<" Calories/Day";
        cout<<"\nExercise 1- 3 times/week: "<<exercise13<<" Calories/Day";
        cout<<"\nExercise 4- 5 times/week: "<<exercise45<<" Calories/Day";
        cout<<"\nDaily Exercise 3-4 times/week: "<<dailyexercise34<<" Calories/Day";
        cout<<"\nIntense Exercise 6-7 times/week: "<<intexercise67<<" Calories/Day";
        cout<<"\nVery Intense Exercise: "<<vintexercise<<" Calories/Day\n\n";
    }

    system("pause");
    return 0;
}    

double bmrmale(double W,double H,int A)
{
    double result;
    result=(10*W) + (6.25*H) - (5*A) + 5;
    return result;
}

double bmrfemale(double W,double H,int A)
{
    double result;
    result=(10*W) + (6.25*H) - (5*A) - 161;
    return result;
}