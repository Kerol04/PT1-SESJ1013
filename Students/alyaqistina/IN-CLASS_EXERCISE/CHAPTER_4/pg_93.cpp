/*
Write a C++ program to calculate a rectangle’s area. The program consists
of the following functions:

– getLength – This function should ask the user to enter the
rectangle’s length, and then returns that value as a double.
– getWidth – This function should ask the user to enter the
rectangle’s width, and then returns that value as a double.
– getArea – This function should accept the rectangle’s length and
width as arguments and return the rectangle’s area.
– displayData – This function should accept the rectangle’s length,
width and area as arguments, and display them in an appropriate
message on the screen.
– main – This function consists of calls to the above functions.

*/

#include <iostream>
using namespace std;

double getLength();                                                                 //Function Prototype but no arguments or parameters needed.
double getWidth();                                                                  //Function Prototype, no par/arg needed bcs nothing gets passed or accepts.
double getArea(double,double);
void displayData(double,double,double);

int main()
{   
    
    cout << "This is a C++ program to calculate a rectangle's area." << endl;
    
    double l = getLength();
    double w = getWidth();
    double a = getArea(l,w);
    displayData(l,w,a);

    return 0;
}

double getLength()
{
    double l;
    cout << "Enter rectangle's length = ";
    cin >> l;
    return l;
}

double getWidth()
{
    double w;
    cout << "Enter rectangle's width = ";
    cin >> w;
    return w;
}

double getArea(double l, double w)
{
   return l*w;
}


void displayData(double l, double w, double a)
{
   cout << "The rectangle's length is " << l << " and the rectangle's width is " << w 
   << "." << " The area of the rectangle is " << a << ".";
}





