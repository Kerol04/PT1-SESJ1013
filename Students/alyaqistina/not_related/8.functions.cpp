//FUNCTIONS

#include <iostream>
using namespace std;

/*void function will not return anything
   () = parameter   
   void function MUST BE ATAS main function      */

void sayHi(string name, int age)
{
    cout << "Heloo" << name << "you are " << age << endl;
}


//MAIN FUNCTION : int main(){}
int main()
{
    sayHi("Sarah", 25);//calling the function: calling the sayHi() function
    sayHi("Tom", 20);
    sayHi("Mike", 13);
    return 0;
}
/*OUTPUT = Heloo Sarah you are 25
           Heloo Tom you are 20
           Heloo Mike you are 13