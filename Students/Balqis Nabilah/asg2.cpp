#include <iostream>
using namespace std;

int Age();
char Gender();
float Height();
float Weight();
void ActLevel(float);

int main() 
{
    float h, w, lv;
    int a, bmr, repeat;
    char g;

    a = Age();
    g = Gender();
    h = Height();
    w = Weight();

    if (g == 'M') {
        bmr = (10 * w) + (6.25 * h) - (5 * a) + 5;
    } else if (g == 'F') {
        bmr = (10 * w) + (6.25 * h) - (5 * a) - 161;
    }

    cout << endl << "BMR = " << bmr << " Calories/day" << endl; 

    ActLevel(bmr);

// Repitition: Ask user to repeat process	
	cout << endl << "Repeat process? (1 for yes, 0 for no): ";
    cin >> repeat;

    while (repeat == 1) {
        a = Age();
        g = Gender();
        h = Height();
        w = Weight();
        if (g == 'M') {
        	bmr = (10 * w) + (6.25 * h) - (5 * a) + 5;
        } else if (g == 'F') {
        	bmr = (10 * w) + (6.25 * h) - (5 * a) - 161;
        }
        cout << "BMR = " << bmr << " Calories/day";
        ActLevel(bmr);
        cout << endl << "Repeat process? (1 for yes, 0 for no): " << endl;
        cin >> repeat;
    }

    return 0;
}

// Age Function
int Age() 
{
    int a;
    cout << "Enter Age: ";
    cin >> a;
    while (a <= 15 || a >= 80) {
        cout << "Please provide an age between 15 and 80." << endl;
        cout << "Enter Age: ";
        cin >> a;
    }
    return a;
}

// Gender Function
char Gender() 
{
    char g;
    cout << "Enter Gender (M/F): ";
    cin >> g;
    return g;
}

// Height Function
float Height() 
{
    float h;
    cout << "Enter Height (in cm): ";
    cin >> h;
    return h;
}

// Weight Function
float Weight() 
{
    float w;
    cout << "Enter Weight (in kg): ";
    cin >> w;
    return w;
}

// Activity Level Function
void ActLevel(float bmr) 
{
    int c1,c2,c3,c4,c5,c6;
    c1 = bmr * 1.2;
    c2 = bmr * 1.375;
    c3 = bmr * 1.465;
    c4 = bmr * 1.55;
    c5 = bmr * 1.725;
    c6 = bmr * 1.9;

    cout << "\nSedentary: little or no exercise: " << c1 << endl;
    cout << "Exercise 1-3 times/week: " << c2 << endl;
    cout << "Exercise 4-5 times/week: " << c3 << endl;
    cout << "Daily exercise or intense exercise 3-4 times/week: " << c4 << endl;
    cout << "Intense exercise 6-7 times/week: " << c5 << endl;
    cout << "Very intense exercise daily, or physical job:  " << c6 << endl;
}