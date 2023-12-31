/*

Write a program with if statements that will display the word
“digit” if the variable ch contains numeric data, or display
the word “letter” if the variable ch contains alphabet data.
Otherwise, it should display “special character”

*/




#include <iostream>
#include <cctype>
using namespace std;

int main()
{
char ch;

 cout << "Enter character: ";
 cin.get(ch);

    if(isdigit(ch)){
        cout.put(ch);
        cout << "digit";  //OUTPUT = Aletter
    }

    else if(isalpha(ch)){
        cout.put(ch);
        cout << "letter";  //OUTPUT = 5digit
    }
    
    else 
    cout << "special character";   //OUTPUT = special character


    return 0;
}