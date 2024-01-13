// TEST2-QUESTION 2
// Name: BALQIS NABILAH BINTI MUHAMMAD AZWAN
// Matric No.: A23CS0054
// Section: 06

#include <iostream>
#include <cmath>

using namespace std;

// function prototypes
float quadratic (int, int, int);

// start main function
int main() 
{
	char cont;
	double a, b, c, res;
	
	do 
	{
		cout << "Welcome to Quadratic Equation Program" << endl;
		cout << "\nCreate a quadratic equation in standard form:" << endl;
		cout << "ax^2 + bx + c = 0" << endl;
		cout << "\nEnter values of a, b and c: ";
		cin >> a >> b >> c;
	
		cout << "\nQuadratic equation created: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
		res = quadratic (a, b, c);
	
		if (res < 0)
			cout << "\nThe equation entered had complex root" << endl;
		else if (res > 0)
			cout << "\nThe equation entered has two real roots" << endl;
		else 
			cout << "\nThe equation entered has one real root" << endl;
		
		cout << "\nDo you wish to continue? (y/n) : ";
		cin >> cont;
		cout << endl;
		
	} while (cont == 'Y' || cont == 'y');
	
	
    return 0;
}

float quadratic (int a, int b, int c)
{
	double x1, x2;
	double disc = (pow(b,2) - 4*a*c);
	
	cout << "Discriminant of the Quadratic equation is: " << disc << endl;
	
	if (disc < 0)
		cout << "Program cannot solve for complex root" << endl;
	else
	{
		x1 = (-b + sqrt(pow(b, 2) - 4*a*c)) / 2*a;
		x2 = (-b - sqrt(pow(b, 2) - 4*a*c)) / 2*a;
		cout << "The roots are, x1 = " << x1 << ", x2 = " << x2 << endl;
	}
	
	return disc;
}
