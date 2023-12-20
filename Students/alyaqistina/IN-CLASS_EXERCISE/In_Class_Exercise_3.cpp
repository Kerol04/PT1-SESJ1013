/*                     -------IN CLASS EXERCISE PG 81, CHP 5--------
14 DECEMBER 2023
Write a complete program that stores the following number of medal
collection for 5 countries into the 2-D array called medals.
          Gold Silver Bronze
Country 1 129   257     590
Country 2 120   279     394
Country 3 115   290     123
Country 4 98    209     112
Your program must have the following functions that do the
following:
– Read the number of medal for each country from a keyboard and
store them inside the medals array.
– Return total number of medals won by country 3.
– Return the largest number of medals won.
– Return the smallest number of medals won.
– Return the highest number of gold medal won.
– Return the total number of bronze medal won.
*/

#include <iostream>
using namespace std;


    const int row = 5, column = 3;
    const char Typemedal[][10]={"Gold","Silver","Bronze"};

     void inputMedal(int medal[row][column]){
        cout << "Insert the numbers of meda for each country: " <<endl;

        for (int i = 0; i < row; i++){
            cout << "Country" << " "<<i+1<<endl;

            for (int j = 0; j < column; j++){
                cout << "\t"<<Typemedal[j]<<":";
                cin >> medal[i][j];
            }
        }
      }


int NumMedalC3 (int medal[row][column]){

    int MedalC3 = 0;

    for (int i = 0; i < column; i++){
        MedalC3 += medal[2][i];
    }
    return MedalC3;
}


int LargestMedal (int medal[row][column]){

    int LargestMedal = medal[0][0];

    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            if((medal[i][j]) > (medal[0][0])){
                LargestMedal = medal[i][j];
            }
        }
    } return LargestMedal;
}


int SmallestMedal (int medal [row][column]){

    int SmallestMedal = medal[0][0];

    for (int i = 0; i<row; i++){
        for (int j = 0; j < column; j++){
            if((medal[i][j]) > (medal[0][0])){
                SmallestMedal = medal[i][j];
            }
        }
    } return SmallestMedal;
}


int highestGold (int medal[row][column]){

    int highestGold = medal[0][0];

    for (int i = 0; i < row; i++){
        if ((medal[i][0]) > (medal[0][0])){
            highestGold = medal[i][0];
        }
    } return highestGold;
}


int TotalBronze (int medal[row][column]){

    int TotalBronze = 0;

    for(int i = 0; i < row; i++){
        TotalBronze += medal [i][2];
    } return TotalBronze;
}


int main(){

    int medal [row][column];
    inputMedal(medal);

    cout << "Ttotal number of medals won by country 3: " << NumMedalC3(medal) <<endl;
    cout << "The largest number of medals won: " << LargestMedal(medal) <<endl;
    cout << "The smallest number of medals won: " << SmallestMedal(medal) <<endl;
    cout << "The highest number of gold medal won: " << highestGold(medal) <<endl;
    cout << "The total number of bronze medal won: " << TotalBronze(medal) <<endl;

    return 0;
}

