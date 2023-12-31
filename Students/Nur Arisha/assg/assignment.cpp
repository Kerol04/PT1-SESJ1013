#include <iostream>
using namespace std;

//global variable declaration
int a;
double w, h, bmr;
char g;

//function prototype
double calc(int, double, double);

//main function
int main()
{

    cout << "---------------------------";
    cout << "\nWELCOME TO BMR CALCULATOR!";
    cout << "\n---------------------------";

//age input
do{
    cout << "\nEnter age: ";
    cin >> a;
 }while ((a<14) || (a>81));//age is between 15-80

//weight and height input
        cout << "\nEnter weight: ";
        cin >> w;
        cout << "\nEnter height: ";
        cin >> h;
        calc(a, w, h); //function call

        cout << "\n\nYOUR ACTIVITY LEVEL IS: ";

//activity level output
        do{
        if((bmr>0) && (bmr<1927))
        {
            cout << "\nYou have to do little to no exercise.";
        }
        else if((bmr>1926) && (bmr<2208))
        {
            cout << "\nYou have to exercise 1-3 times a week.";
        }
        else if((bmr>2207) && (bmr<2352))
        {
            cout << "\nYou have to exercise 4-5 times a week.";
        }
        else if((bmr>2351) && (bmr<2487))
        {
            cout << "\nYou have to exercise daily.";
        }
        else if((bmr>2486) && (bmr<2768))
        {
            cout << "\nYou have to do intense exercise 6-7 times a week.";
        }
        else if((bmr>2767) && (bmr<3049))
        {
            cout << "\nYou have to exercise 1-3 times a week.";
        }
        else{
            cout << "\nINVALID.";
        }
        } while((bmr<0) && (bmr>3050));

        cout << "\n-----------------------------------";
        cout << "\nTHANK YOU FOR USING BMR CALCULATOR";
        cout << "\n-----------------------------------";

    return 0;

}

//function definition
double calc(int n1, double n2, double n3)
{
    cout << "\nEnter gender (M/F): ";
    cin >> g;
    //option of gender
    if (g == 'M')
    {
       bmr =  (10*w) + (6.25*h) - (5*a) + 5;
       cout << "\nYour BMR is " << bmr << " calories/day!";
    }
    else if (g == 'F')
    {
        bmr = (10*w) + (6.25*h) - (5*a) - 161;
        cout << "\nYour BMR is " << bmr << " calories/day!";
    }
    else{
        cout << "\nYour gender is invalid. Please try again.";
    }
   

    return bmr;

}