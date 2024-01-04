#include <iostream>
#include <cmath>


using namespace std;

// function prototypes
double quadratic(double, double, double);

// start main function
int main() {
   char cont;
   double a, b, c, res;

   cout << "Welcome to Quadratic Equation Program\n";
   cout << "Create a quadratic equation in standard form ax^2 + bx + c = 0\n";
   
   do{
   cout << "Enter the values of a, b, and c:";
   cin >> a >> b >> c;

   cout << "Quadratic equation created:";
   cout << a << "x^2 + " << b << "x + " << c << " = 0\n";

  
   cout << "Discriminant of the quadrratic equation is: " ;
    res = quadratic(a,b,c);
    cout << endl;

   if(res < 0)
        cout << "The equation entered had complex root\n\n";
    else if(res > 0)
        cout << "The equation entered had two real roots\n\n";
    else
        cout << "The equation entered had one real root\n\n";
    
    cout << "Do you wish to continue? (y/n):";
    cin >> cont;
   }
    while(cont == 'y' || cont == 'Y');

    return 0;
}

double quadratic(double a, double b, double c)
{
    double x1, x2;

    double disc = pow(b,2) - 4*a*c;

    cout << disc;

    if(disc < 0){
        cout << "Program cannot solve for complex root\n";
    }

    x1 = (-b + sqrt(disc))/2*a;

    x2 = (-b - sqrt(disc))/2*a;

    cout << endl;

    cout << "The roots are, x1 = " << x1 << ", x2 = " << x2 << endl;

    return disc;
}
