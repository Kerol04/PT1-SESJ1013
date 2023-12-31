//ARRAY
//container macam VARIABLES, tapi ARRAY boleh contain banyak value


#include <iostream>
using namespace std;

int main(){

    int genap[] = {2, 4, 6, 8, 10};

    cout << genap[0];
        //OUTPUT = 2 [sebab index 0 is 2]

    genap[0] = 12; //>> boleh update value baru for index 0
    cout << genap[0];
            //OUTPUT = 12
 
    

    //UNKNOWN VALUE
    int Numbers[20] = {2, 4, 6, 8, 10};//store 20 value in this array

    Numbers[10] = 18;
    cout << Numbers[10];

        for(int i=5;i<20;i++)
    {   
        cout << "Enter value for index " << i << ": ";
        cin >> Numbers[i];
    }
    cout << endl;
    
    for(int i=0;i<20;i++)
    {
        cout << Numbers[i] << ", ";
    }



return 0;
}