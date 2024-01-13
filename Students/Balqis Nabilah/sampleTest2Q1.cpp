// TEST2-QUESTION 1 (Debugging)
// Name: BALQIS NABILAH BINTI MUHAMMAD AZWAN
// Matric No.: A23CS0054
// Section: 06

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
void setPackage(int &); //1

float wash(string &); //2
float vacuum(string &); //3
float polish(string &); //4

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
    setPackage(wsPkg); //5
	
    switch (wsPkg) {
		case 3: totalCharge += polish(carType); 
		case 2: totalCharge += vacuum(carType); //6
		case 1: totalCharge += wash(carType); break;
    }

    cout << endl;

    cout << "Total service charge is " << totalCharge;
    return 0;
}

// implement new user-defined functions

// function to set car type
void setType(string &type) { //7
   // only exit the loop after user enter valid
   // car type that are "sedan" or "mpv"
   do {
        cout << "\nEnter car type (sedan/mpv): ";
        cin >> type;

   } while (type.compare("sedan") && type.compare("mpv"));

   cout << endl;
}

// function to set wash service package
void setPackage(int &pkg) { //8
   // only exit the loop after user enter valid
   // integer number 1, 2 or 3
   do { //9
        cout << "1. Basic\n";
        cout << "2. Deluxe\n";
        cout << "3. Premium\n";
        cout << "Choose wash service package (1/2/3): ";
        cin >> pkg;
   } while (pkg < 1 || pkg > 3); 

   cout << endl;
}

// Function to determine exterior wash service charge based
// on car type. The "mpv" type car will be charged 20% higher.
float wash(string &type) { //10
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
float vacuum(string &type) { //11
   float charge;

   if (!type.compare("mpv")) { //12
       charge = VACUUM + VACUUM * 5 / 100;

   } else {
       charge = VACUUM; //13
   }


   cout << "Vacuum service charge is " << charge << endl;

   return charge;
}

// Function to determine exterior polish service charge based
// on car type. The "mpv" type car will be charged 20% higher.
float polish(string &type) { //14
   float charge;

   if (!type.compare("mpv"))
      charge = POLISH + POLISH * 20 / 100;
   else
      charge = POLISH;

   cout << "Polish service charge is " << charge << endl;

   return charge;
}

/*
Please open/view your C++ source code and the running program side by side.
Test the running program by using the following test cases:

TEST CASE 1:
--------------------------------------------------------------------------
Enter car type (sedan/mpv): suv

Enter car type (sedan/mpv): sedan

1. Basic
2. Deluxe
3. Premium
Choose wash service package (1/2/3): 0
1. Basic
2. Deluxe
3. Premium
Choose wash service package (1/2/3): 4
1. Basic
2. Deluxe
3. Premium
Choose wash service package(1/2/3): 1

Wash service charge is 10

Total service charge is 10


TEST CASE 2:
--------------------------------------------------------------------------
Enter car type (sedan/mpv): sedan

1. Basic
2. Deluxe
3. Premium
Choose wash service package (1/2/3): 2

Vacuum service charge is 7
Wash service charge is 10

Total service charge is 17


TEST CASE 3:
--------------------------------------------------------------------------
Enter car type (sedan/mpv): mpv

1. Basic
2. Deluxe
3. Premium
Choose wash service package (1/2/3): 2

Vacuum service charge is 7.35
Wash service charge is 12

Total service charge is 19.35


TEST CASE 4:
--------------------------------------------------------------------------
Enter car type (sedan/mpv): sedan

1. Basic
2. Deluxe
3. Premium
Choose wash service package (1/2/3): 3

Polish service charge is 15
Vacuum service charge is 7
Wash service charge is 10

Total service charge is 32


TEST CASE 5:
--------------------------------------------------------------------------
Enter car type (sedan/mpv): mpv

1. Basic
2. Deluxe
3. Premium
Choose wash service package (1/2/3): 3

Polish service charge is 18
Vacuum service charge is 7.35
Wash service charge is 12

Total service charge is 37.35
*/
