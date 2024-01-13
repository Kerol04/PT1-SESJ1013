
// Name: Huwa Jia Sheng
// Matric No.: A23CS5005
// Section: 04

#include <iostream>
#include <cmath>

using namespace std;

// function prototypes
float quadratic(int , int, int);

// start main function
int main() {
    char cont;
    double a, b, c, result;
    
    cout<<"Welcome to Quadratic Equation Program\n"<<endl;
    cout<<"Create a quadratic equation in standard form:\n ax^2 + bx + c = 0"<<endl;

    do{
    cout<<"\nEnter the values of a, b, and c: ";
    cin>>a >>b >>c;

    cout<<"\nQuadratic equation created: "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0\n";

   result= quadratic(a, b, c);

    if(result<0){
        cout<<"\n\nThe equation entered had complex root"<<endl;
    }
    else if(result>0){
        cout<<"\n\nThe equation entered had two real roots"<<endl;
    }
    else{
        cout<<"\n\nThe equation entered had one real root"<<endl;

    }

    cout<<"\nDo you wish to continue? (y/n):";
    cin>>cont;

    } while((cont=='Y') ||(cont=='y'));

    return 0;
}

float quadratic(int a,int b,int c){
        double x1, x2;
        double disc= pow(b,2) - 4*a*c;

    cout<<"Discriminant of the Quadratic equation is: "<<disc<<endl;

    if(disc<0)
        cout<<"Program cannot solve for complex root";
    else
        x1=(-b + sqrt(disc))/(2*a);
        x2=(-b - sqrt(disc))/(2*a);
        cout<<"The roots are, x1 = "<<x1<<", x2 = "<<x2;

    return disc;
}

