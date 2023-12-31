/*

Write a program to toggle the contents of a string character
from lower to upper case or vice versa.

*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char n;

    cout << "Enter : ";
    cin >> n;

    if(islower(n)){
    n = toupper(n);
    }

    else
    n = tolower(n);
    
    cout << n;



    return 0;
}