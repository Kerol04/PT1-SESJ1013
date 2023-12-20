#include <iostream>
using namespace std;
int main (){
     int code;    
     cout << "Enter code: ";    
     cin >> code; 
     
     switch(code){

        case 1:
        cout << "Description: Special";
        break;

        case 2: 
        case 4:
        cout << "Description: Even";
        break;

        default:
        if(code!=3){
        cout << "Description: Awkward";
        }
        break;

     }
     
     system ("pause");

     return 0;

}