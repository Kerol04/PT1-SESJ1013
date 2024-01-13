// Name: ???
// Matric No.: ???
// Section: ???

#include <iostream>
#include<cmath>
using namespace std;

// function prototypes
int quadraticEquation(double a, double b, double c);

// start main function
int main() {
    char cont;
    double a, b, c, res;

    cout<<"Welcome to Quadratic Equation Program" << endl;
    cout<<"Create a quadratic equation in standard form: ax^2+bx+c=0"<< endl;
    do{
    cout<<"Enter the values of a, b, and c:";
    cin >> a >> b >> c;
   

    cout<<"Quadratic equation created :" << a << "x^2 + " << b << "x + "<< c << "= 0" << endl;
   
    res = quadraticEquation(a, b, c);

    if(res<0){
        cout<<"The equation entered had complex root"<<endl;
    }
    else if(res>0){
        cout<<"The equation entered had two real roots"<<endl;
    }
    else {
        cout<<"The equation entered had one real root"<<endl;
    }

cout<<"Do you wish to continue? (y/n)";
cin>> cont;
}while (cont=='Y'||cont=='y');

   system("pause");
    return 0;

}

int quadraticEquation(double a, double b, double c){
    double discriminant = (b*b) - (4*a*c);
    cout<<"Discriminant of the Quadratic Equation is: "<< discriminant <<endl;

    if(discriminant < 0){
       cout<<"Program cannot solve for complex root"<<endl;
      
    } else {
        cout<<"Program cannot solve for complex root"<<endl;
        double root_x1 = (-b + sqrt((b*b) - (4*a*c)))/ (2*a);
       double root_x2 = (-b - sqrt((b*b) - (4*a*c)))/ (2*a);

       cout<<"The Root1 is: "<< root_x1<< endl;
       cout<<"The Rooot2 is: "<< root_x2<< endl;
    }

    return discriminant;

} 