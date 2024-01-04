// TEST2-QUESTION 1 (Debugging)
// Name: 	   MUHAMMAD KHAIRUL HAKIMI BIN MOHD KHALID
// Matric No.: A23CS0133
// Section:    04

#include <iostream>
#include <string>
#include <cctype>

// standard car wash service charge for
// "sedan" type car
#define WASH 10.0
#define VACUUM 7.0
#define POLISH 15.0

using namespace std;

// function prototypes
void setType(string &);
void setPackage(int &);

float wash(string);
float vacuum(string);
float polish(string);

// start main function
int main() {
    // car type
    string carType;

    // car wash service package
    int wsPkg;

    // total service charge based on car type and
    // wash service package
    float totalCharge;

    setType(carType);
    setPackage(wsPkg);

    switch(wsPkg) {
        case 3: totalCharge += polish(carType); break;
        case 2: totalCharge += vacuum(carType); break;
        case 1: totalCharge += wash(carType); break;
    }

    cout << endl;

    cout << "Total service charge is " << totalCharge<<endl;
    
    system("pause");
    return 0;
}

// implement new user-defined functions

// function to set car type
void setType(string &type) {
   // only exit the loop after user enter valid
   // car type that are "sedan" or "mpv"
    do {
        cout << "\nEnter car type (sedan/mpv): ";
        cin >> type;

    } while (type.compare("sedan") && type.compare("mpv"));

    cout << endl;
}

// function to set wash service package
void setPackage(int &pkg) {
   // only exit the loop after user enter valid
   // integer number 1, 2 or 3
    while (pkg < 1 || pkg > 3) {
        cout << "1. Basic\n";
        cout << "2. Deluxe\n";
        cout << "3. Premium\n";
        cout << "Choose wash service package (1/2/3): ";
        cin >> pkg;
    }

    cout << endl;
}

// Function to determine exterior wash service charge based
// on car type. The "mpv" type car will be charged 20% higher.
float wash(string type) {
    float charge;

    if (!type.compare("mpv"))
       charge = WASH + WASH * 20 / 100;
    else
       charge = WASH;

    cout << "Wash service charge is " << charge << endl;

    return charge;
}

// Function to determine interrior vacuum service charge based
// on car type. The "mpv" type car will be charged 5% higher.
float vacuum(string type) {
    float washcharge, vaccharge, charge;

    if (!type.compare("mpv")) {
    	washcharge = WASH + WASH * 20 / 100;
        vaccharge = VACUUM + VACUUM * 5 / 100;
        charge = washcharge + vaccharge;
    } else {
    	washcharge = WASH;
    	vaccharge = VACUUM;
        charge = washcharge + vaccharge;
    }

    cout << "Vacuum service charge is " << vaccharge << endl << "Wash service charge is "<< washcharge << endl;

    return charge;
}

// Function to determine exterior polish service charge based
// on car type. The "mpv" type car will be charged 20% higher.
float polish(string type) {
    float washcharge, vaccharge, polcharge, charge;

    if (!type.compare("mpv")){
    	washcharge = WASH + WASH * 20 / 100;
        vaccharge = VACUUM + VACUUM * 5 / 100;
        polcharge = POLISH + POLISH * 20 / 100;
        charge = washcharge + vaccharge + polcharge;
    }
    else{
    	washcharge = WASH;
    	vaccharge = VACUUM;
        polcharge = POLISH;
        charge = washcharge + vaccharge + polcharge;
    }

    cout << "Polish service charge is " << polcharge << endl << "Vacuum service charge is " << vaccharge << endl << "Wash service charge is "<< washcharge << endl;

    return charge;
}
