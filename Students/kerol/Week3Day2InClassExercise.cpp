#include <iostream>

using namespace std;

int main(){
    
    int a=1;
    double d=1.0;
    
    //question i) a = 46/9;
    a = 46/9;
    cout<<"a = "<<a<<endl;
    //answer for i) is a = 5
    
    //question ii) a = 46 % 9 + 4 * 4 – 2;
    a = 46 % 9 + 4 * 4 - 2;
    cout<<"a = "<<a<<endl;
    //answer for ii) is a = 15
    
    //question iii) a = 45 + 43 % 5 * (23 * 3 % 2);
    a = 45 + 43 % 5 * (23 * 3 % 2);
    cout<<"a = "<<a<<endl;
    //answer for iii) is a = 48
    
    a=1;//value of a changed earlier so i need to do this so value a is 1
    
    //question iv) a %=3 / a + 3;
    a %=3 / a + 3;
    cout<<"a = "<<a<<endl;
    //answer for iv) is a = 1
    
    //question v) d += 1.5 * 3 + (++a);
    d += 1.5 * 3 + (++a);
    cout<<"d = "<<d<<endl;
    //answer for v) is d = 7.5
    
    a=1;//value of a changed earlier so i need to do this so value a is 1
    d=1.0;//value of d changed earlier so i need to do this so value d is 1.0
    
    //question vi) d -= 1.5 * 3 + a++;
    d -= 1.5 * 3 + a++;
    cout<<"d = "<<d<<endl;
    //answer for vi) is d = -4.5
    
    return 0;
}
