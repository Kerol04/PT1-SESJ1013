#include <iostream>
using namespace std;

int main() {
    int n;
    int multiply = 1,rem;

    cout << "Enter an integer number: ";
    cin >> n;

   
    while (n >0) {
        rem = n % 10;
        cout << rem;
        n = n / 10;
        multiply *= rem;
        if (n !=0) {
            cout << " * ";}
        else{
		
         cout << " = " <<multiply<<endl;
       
        }
        
    }
     cout <<multiply<<" is multiples of " ;

        if (multiply % 4 == 0  && multiply % 5 == 0 && multiply % 7 == 0) {
            cout <<"4,5 and7"<<endl;
        }
        else if (multiply % 4 == 0  && multiply % 5 == 0 ) {
            cout <<"4 and 5"<<endl;
        }
        else if (multiply % 4 == 0  && multiply % 7 == 0 ) {
            cout <<"4 and 7"<<endl;
        }
        else if (multiply % 5 == 0  && multiply % 7 == 0 ) {
            cout <<"5 and 7"<<endl;
        }
        else if (multiply % 4 == 0   ) {
            cout <<"4 "<<endl;
        }
        else if (multiply % 5 == 0   ) {
            cout <<"5 "<<endl;
        }
        else if (multiply % 7 == 0   ) {
            cout <<"7 "<<endl;
        }
        
   

    return 0;
}