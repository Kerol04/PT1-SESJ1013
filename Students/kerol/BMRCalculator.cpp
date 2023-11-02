//Coding for flowchart set 1 : BMR Calculator

#include <iostream>

using namespace std;

float CalcM(int a, float h, float w);
float CalcF(int a, float h, float w);

int main()
{
    int A;
    float H, W, BMR, light , moderate, hard;
    char G;
    
    cout<<"Welcome to BMR Calculator\n"<<endl;
    cout<<"Enter your age : ";
    cin >> A;
    cout<<"Enter your gender (M/F) : ";
    cin >> G;
    cout<<"Enter your height : ";
    cin >> H;
    cout<<"Enter your weight : ";
    cin >> W;
    
    while( A<15 || A>80 || H<0 || W<0 ){
        
        if( A<15 || A>80 ){
            cout<<"\nPlease provide age between 15 to 80\n"<<endl;
            cout<<"Enter your age : ";
            cin >> A;
            cout<<"Enter your gender (M/F) : ";
            cin >> G;
            cout<<"Enter your height : ";
            cin >> H;
            cout<<"Enter your weight : ";
            cin >> W;
        }else if( H<0 ){
            cout<<"\nPlease provide positive height value\n"<<endl;
            cout<<"Enter your age : ";
            cin >> A;
            cout<<"Enter your gender (M/F) : ";
            cin >> G;
            cout<<"Enter your height : ";
            cin >> H;
            cout<<"Enter your weight : ";
            cin >> W;
        }else if( W<0 ){
            cout<<"\nPlease provide positive weight value\n"<<endl;
            cout<<"Enter your age : ";
            cin >> A;
            cout<<"Enter your gender (M/F) : ";
            cin >> G;
            cout<<"Enter your height : ";
            cin >> H;
            cout<<"Enter your weight : ";
            cin >> W;
        }
    }
    
    switch (G){
        case 'M' : case 'm' : BMR = CalcM(A, H, W);
                 break;
        case 'F' : case 'f' : BMR = CalcF(A, H, W);
                 break;
    }
    
    //DAILY CALORIE CALCULATION
    light = BMR * 1.375;
    moderate = BMR * 1.55;
    hard = BMR * 1.725;
    
    //DISPLAY OUTPUT
    cout<<"\nBMR = "<<BMR<<" Calories/day"<<endl;
    cout<<"\nDaily calorie needs based on activity levels\n";
    cout<<"\nLight exercise(sports 1-3 days/week)    = "<<light<<endl;
    cout<<"Moderate exercise(sports 3-5 days/week) = "<<moderate<<endl;
    cout<<"Hard exercise(sports 6-7 days/week)     = "<<hard<<endl;
    cout<<"\n~~~Thank You For Using BMR Calculator~~~"<<endl;
    
    return 0;
}

float CalcM(int a, float h, float w){
    float result;
    result = (10*w) + (6.25*h) - (5*a) + 5;
    return result;
}

float CalcF(int a, float h, float w){
    float result;
    result = (10*w) + (6.25*h) - (5*a) - 161;
    return result;
}
