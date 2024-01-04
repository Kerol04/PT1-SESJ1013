
// Name:       MUHAMMAD KHAIRUL HAKIMI BIN MOHD KHALID
// Matric No.: A23CS0133
// Section:    04

#include <iostream>
#include <cmath>

using namespace std;

// function prototypes
double quadratic(double , double , double);

// start main function
int main() {
	
	char cont;
	double a, b, c, res;
	
	cout<<"Welcome to Quadratic Equation Program\n\nCreate a quadratic equation in standard form:\nax^2 + bx + c = 0\n";
	
	do{
	cout<<"\nEnter the values of a, b, and c: ";
	cin >> a >> b >> c;
	cout<<"\nQuadratic equation created: "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;
	
	res = quadratic(a,b,c);
	
	if(res<0){
		cout<<"\nThe equation entered had complex root"<<endl;
	}else if(res>0){
		cout<<"\nThe equation entered had two real roots"<<endl;
	}else{
		cout<<"\nThe equation entered had one real root"<<endl;
	}
	
	do{
	cout<<"\nDo you wish to continue? (y/n): ";
	cin >> cont;
	}while(cont!='y' && cont!='Y' && cont!='n' && cont!='N');
 
	}while(cont == 'y' || cont == 'Y');
	
	cout<<"\nThank you for using this program"<<endl<<endl;
	system("pause");
    return 0;
}

double quadratic(double a, double b, double c){
	
	double x1, x2;
	double disc = pow(b,2) - 4 * a * c;
	
	cout<<"Discriminant of the quadratic equation is: "<<disc<<endl;
	
	if(disc<0){
		cout<<"Program cannot solve for complex root"<<endl;
	}else{
		x1 = ((-b) + sqrt(disc)) / (2 * a);
		x2 = ((-b) - sqrt(disc)) / (2 * a);
		cout<<"The roots are, x1 = "<<x1<<", x2 = "<<x2<<endl;
	}
	
	return disc;
}

