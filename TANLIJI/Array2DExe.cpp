#include <iostream>
#include <iomanip>
using namespace std;

int main(){
const int ROWS = 4;
const int COLS = 3;
int medals [ROWS][COLS];
int total=0;
int totalmedals[3];
int highest;
int lowest;
int highestgold;
int totalbronze=0;

//Read the number of medal for each country from a keyboard and store them inside the medals array
for (int i=0;i<ROWS;i++){
    for (int j=0;j<COLS;j++){
        cout<<"Enter the gold medals won by country "<<i+1<<" (gold,sliver,bronze): "<<endl;
        cin>>medals[i][j];
    }
}

//Return total number of medals won by country 3
for (int i=0;i<ROWS;i++){
    for (int j=0;j<COLS;j++){
        total += medals[i][j];
    }
    totalmedals[i]=total;
    total=0;
}
cout<<"The total medals won by country 3 is "<<totalmedals[3]<<endl;

//Return the largest and smallestnumber of medals won
highest=totalmedals[0];
lowest=totalmedals[0];
for (int i=0;i<ROWS;i++){
    if(totalmedals[i]>highest){
        highest=totalmedals[i];
    }
    if(totalmedals[i]<lowest){
        lowest=totalmedals[i];
    }
}
cout<<"The largest medals won is "<<highest<<endl;
cout<<"The smallest medals won is "<<lowest<<endl;

//Return the highest number of gold medal won
highestgold=medals[0][0];
for(int i=0;i<COLS;i++){
    if (medals[i][0]>highestgold){
        highestgold=medals[i][0];
    }
}
cout<<"The highest gold won is "<<highestgold<<endl;

//Return the total number of bronze medal won
for(int i=0;i<COLS;i++){
    totalbronze+=medals[i][2];
}
cout<<"The total bronze medals won is "<<totalbronze<<endl;

return 0;
}
