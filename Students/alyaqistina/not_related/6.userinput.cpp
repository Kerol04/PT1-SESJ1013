//USER-INPUT STRING

#include <iostream>
using namespace std;

//use getline command --> ada dua arguments
//this is to input STRING OF WORDSS

int main (){

    string name;
    cout <<"Enter your name:";
    getline(cin, name); //guna getline kalau nak user input string more than one word

    cout << "Hello " << name << endl;

    return 0;
    
}