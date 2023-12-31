//VARIABLES


#include <iostream>

using namespace std;

//Kalau nak tukar nama(Rory) ATAU tukar umur(33), boleh pakai variable.
//Ada dua type of data that can strore inside a variable.
// 1. String Variable = "MAKAN"
//     - string namasaya = "tina";
// 2. int Variable = 34/5/70
//     - int umur; markah = 100;


int main(){
 

   //Declaring Variables:
   string PrincessName = "Rory";
   int PrincessAge;
   PrincessAge = 33;
     
    cout << "There once was a princess named "<< PrincessName<< endl; 
            // OUTPUT = There once was a princess named Rory

    cout << "She was "<< PrincessAge<<" years old."<<endl;
            // OUTPUT = She was 33 years old.

    OR BOLEH UPDATE VARIABLE SEPARUH JALAAN eg:
    //cth nak tukar nama princess, tulis je string sama cam kata atas.

    string PrincessName = "Linda"; //THIS UPDATES THE VARIABLE.

    cout << "She liked her name"<< PrincessName<<endl;
             //OUTPUT = She liked her name Linda

    cout << "But she did not like being "<< PrincessAge << endl;
            // OUTPUT = But she did not like being 33

    return 0;
}