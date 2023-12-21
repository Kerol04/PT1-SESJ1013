#include <iostream>

using namespace std;

int main(){
    int medal[4][3], medalwon3 = 0, highest = 0, temp = 0, smallest = 100000;

    for(int i=0; i<4; i++){
        cout << "Enter the number of gold medals for country "<< i+1 <<": ";
        cin >> medal[i][0];
        cout << "Enter the number of silver medals for country "<< i+1 <<": ";
        cin >> medal[i][1];
        cout << "Enter the number of bronze medals for country "<< i+1 << ": ";
        cin >> medal[i][2];
    }


    for(int i= 0; i<3; i++){
        medalwon3 = medalwon3 + medal[2][i];
    } 

    cout << "Total number of medal won by country 3: " << medalwon3 << endl;

    for(int i= 0; i<4; i++){
        temp = 0;
        for(int y = 0; y<3; y++){
            temp = temp + medal[i][y];
        }
        if(temp > highest)
            highest = temp;
    } 

    cout << "Largest number of medals won: " << highest << endl;



    for(int i= 0; i<4; i++){
        temp = 0;
        for(int y = 0; y<3; y++){
            temp = temp + medal[i][y];
        }
        if(temp < smallest)
            smallest = temp;
    } 

    cout << "Smallest number of medals won: " << smallest << endl;

    highest = 0;
    for(int i = 0; i<4; i++){
        if (medal[i][0] > highest)
            highest = medal[i][0];
    }

    cout << "Highest number of gold medals won: " << highest << endl;

    temp = 0;
    for(int i =0; i<4; i++){
        temp = temp + medal[i][2];
    }
    cout << "Total number of bronze medals won: " << temp << endl;

    system("pause");
    return 0;
}