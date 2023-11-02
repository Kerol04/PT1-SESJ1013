//Make a .cpp program for your BMR calculator based on your Assignment 1.

#include <iostream>
using namespace std;

class Room{

  public:
    double A ; //A=age
    double H; //H=height
    double W; //W=weight
    double C; //C=calorie
    char G; //Gender
    char M;
    double BMR;

    double calculatecalorie(){
        cout << "M / F ? ";
        cin >> G;
        if (G == M){
           return ((10*W)+(6.25*H)-(5*A)+5);
        }
        else {
            return ((10*W)+(6.25*H)-(5*A)-161);

        }
    
    }
};

int main(){

    double A;

Room room1;

    do {  
         cout << "Enter Age : ";
          cin >> A;

    }
 
    while (A<15 || A>80);
    cout << "Enter weight (kg): ";
    cin>> room1.W ;
    cout << "Enter height (cm): ";
    cin>> room1.H;

    cout <<  room1.calculatecalorie();

    return 0;
      

 }
