// Name: NUR ARISHA BINTI AMYRUL NAIM
// Matric No.: A23CS0154
// Section: 04

#include <iostream>
#include <cmath>


using namespace std;

// function prototypes
double quadratic (double, double, double);

// start main function
int main() {

    //variable declaration
    double a, b, c, res;
    char cont;

    //output display
    do{
    cout << endl << "Welcome to Quadratic Equation Program" << endl << endl;
    cout << "Create a quadratic equation in standard form: " << endl << endl << "ax^2 + bx + c = 0" << endl;
    cout << "Enter the values of a, b, and c: ";
    cin >> a >> b >> c; // get values of a, b, and c
    cout << endl <<  "Quadratic equation created: " << a << "x^2 + " << b << "x + " << c << "= 0" << endl;
    res = quadratic (a, b, c); //function call

    if (res < 0)
    {
        cout << endl <<  "The equation entered had complex root." << endl;
    }
    else if (res > 0)
    {
        cout << "The equation entered had two real roots." << endl;
    }
    else 
    {
        cout << "The equation entered had one real root." << endl;
    }

    cout << endl << "Do you wish to continue? (y/n): ";
    cin >> cont;
    
    if (cont == 'n')
    return 0;

    }while (cont == 'y');

    return 0;
}

//function definition

double quadratic (double a, double b, double c)
{
    double x1, x2;
    double disc;

    disc = pow (b, 2) - (4*a*c);
    cout << "Discriminant of the Quadratic equation is : " << disc << endl;

    if (disc < 0)
    {
        cout << "Program cannot solve for complex root." << endl;
    }
    else
    {
        x1 = (-b + sqrt(disc)) / 2*a;
        x2 = (-b - sqrt(disc)) / 2*a;
        cout << "The roots are, x1 = " << x1 << " , x2 = " << x2 << endl;
    }
    return disc;

}

