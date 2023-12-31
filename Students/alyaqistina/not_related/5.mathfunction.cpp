//MATH FUNCTIONS

#include <iostream>

//kalau nak buat math function kena ada :
// #include <cmath>
#include <cmath>

int main (){
   
   cout << pow (2, 5); //pow ada 2 arguments@parameters
        // OUTPUT = 32

   cout << sqrt (36);
        //OUTPUT = 6

   cout << round (4.6);
        //OUTPUT = 5

   cout << floor (4.6);
        //OUTPUT = 4

   cout << fmax(3, 10);
        //OUTPUT = 10 [sebab 10 is biggest]@ kalau nak cari smallest pakai fmin

return 0;
}