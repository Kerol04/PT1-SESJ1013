#include <iostream>
using namespace std;

const int COUNTRIES=5, MEDALS=3;
const char medalType[][10] = {"Gold", "Silver", "Bronze"};

void readMedal(int medal[COUNTRIES][MEDALS]){
    cout << "Enter number of medal for each country: \n\n" ;

    for (int i=0; i<COUNTRIES; i++){
        cout << "Country" << " " << i+1 << "\n";

        for (int j=0; j<MEDALS; j++){
            cout << "\t " << medalType[j] << " : ";
            cin >> medal[i][j];
        }
    }
}

int MedalsCountry3 (int medal[COUNTRIES][MEDALS]){
    int TotalMedalC3=0;
    for (int i=0; i<MEDALS ; i++){
        TotalMedalC3 += medal[2][i];
    }
    return TotalMedalC3;
}

int MaxMedal (int medal[COUNTRIES][MEDALS]){
    int MaxMedal = medal[0][0];
    for(int i=0; i<COUNTRIES; i++){
        for(int j=0; j<MEDALS; j++){
            if((medal[i][j]) > (medal[0][0])){
                MaxMedal = medal[i][j];
            }
        }
    }
    return MaxMedal;
}

int MinMedal (int medal[COUNTRIES][MEDALS]){
    int MinMedal = medal[0][0];
    for(int i=0; i<COUNTRIES; i++){
        for(int j=0; j<MEDALS; j++){
            if((medal[i][j]) > (medal[0][0])){
                MinMedal = medal[i][j];
            }
        }
    }
    return MinMedal;
}

int MaxGold (int medal[COUNTRIES][MEDALS]){
    int MaxGold = medal[0][0];
    for (int i=0; i<COUNTRIES;i++){
        if((medal[i][0]) > (medal[0][0])){
            MaxGold = medal[i][0];
        }
    }
    return MaxGold;
}

int TotalBronze (int medal[COUNTRIES][MEDALS]){
    int sumBronze=0;
    for(int i=0; i<COUNTRIES; i++){
        sumBronze += medal[i][2];
    }
    return sumBronze;
}

int main (){
    int medal [COUNTRIES][MEDALS];

    readMedal(medal);

    cout << "\nTotal number of medals won by country 3 : " << MedalsCountry3(medal) << endl;
    cout << "Largest number of medal won : " << MaxMedal(medal) << endl;
    cout << "Smallest number of medal won : " << MinMedal(medal) << endl;
    cout << "Highest number of gold medal won : " << MaxGold(medal) << endl;
    cout << "Total number of bronze medal won : " << TotalBronze(medal) << endl;

    return 0;
}