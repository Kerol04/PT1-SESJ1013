#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

const int ROWS=12;
const int COLS=7;
int total1=0,total2=0,total3=0,totalTeam1=0,totalTeam2=0,totalTeam3=0;
int highestTotal=0;
int Score[12];
int TeamScore[3];
int IndividualScore[12];
int marks[ROWS][COLS];

int HighestTeam=TeamScore[0];

//function prototype
void calcTotal(int[][7]);
void displayLine();
void findIndWinner(int[]);
void findTeamWinner(int[]);

string teamId[12],participantId[12];
int E1[12],E2[12],E3[12],E4[12],E5[12];

//function to calculate Individual Score and Team Score
void calcTotal(int marks[][7]){
    for(int row=0;row<ROWS;row++){
        for(int cols=2;cols<COLS;cols++){
            IndividualScore[row]+=marks[row][cols];
        }
     }
    
    
    for(int row=0;row<ROWS;row++){
        for(int cols=2;cols<COLS;cols++){
            Score[row]+=marks[row][cols];
        }
    }
    TeamScore[0] = Score[0]+Score[1]+Score[2]+Score[3];
    TeamScore[1] = Score[4]+Score[5]+Score[6]+Score[7];
    TeamScore[2] = Score[8]+Score[9]+Score[10]+Score[11];

}

//function to display line 
void displayLine(){
     for(int i=0;i<52;i++){
        cout<<"-";
     }
     cout<<endl;
}

//function to find winner in individual category
void findIndWinner(int IndividualScore[]){ 
    int parti_Id=0,te_Id=0;
    int highestInd=IndividualScore[0];
    for(int row=1;row<12;row++){
          if(IndividualScore[row]>highestInd) {
             highestInd=IndividualScore[row];
             parti_Id=row;
             te_Id=(row/4 + 1); 
          }
    }
    cout<<"Winner for Individual Category : "<< marks[parti_Id][1] <<" (Team "<<te_Id<<")\n";
}

//function to find winner for group category
void findTeamWinner(int TeamScore[]){
    int te_Id=1;
    for(int row=0;row<3;row++){
        if(TeamScore[row]>HighestTeam){
        HighestTeam=TeamScore[row];
        te_Id=(row + 1);
        }
    }
    cout<<"Winner for Group Category: Team "<<te_Id<<" (Score = "<<HighestTeam<< ")\n";
}

// main function
int main(){
    fstream infile("input.txt", ios::in);
        for(int rows=0; rows<ROWS; rows++)
        {
           for(int cols=0;cols<COLS;cols++){
		       infile>> marks[rows][cols];
        }
	    }
        for(int rows=0;rows<ROWS;rows++){
            teamId[rows]=marks[rows][0];
            participantId[rows]=marks[rows][1];
            E1[rows]=marks[rows][2];
            E2[rows]=marks[rows][3];
            E3[rows]=marks[rows][4];
            E4[rows]=marks[rows][5];
            E5[rows]=marks[rows][6];

        }


    if (!infile.is_open()) // check for successful opening
    {
    cout << "Input file could not be opened! Terminating!\n";
    }
    infile.close();

    for(int row=0;row<ROWS;row++){
        for(int cols=2;cols<COLS;cols++){
            IndividualScore[row]+=marks[row][cols];
        }
     }
    
    //Output
     calcTotal(marks);
    
    displayLine();
    cout << "Id" << setw(8) << "E1" << setw(8) << "E2" << setw(8) << "E3" << setw(8) << "E4" << setw(7) << "E5" << setw(10) << "Total" << endl;
    displayLine();
    for (int rows = 0; rows < ROWS; rows++) {
         if ((rows % 4) == 0) {
             cout << "TEAM " << (rows / 4 + 1) << endl;
         }

    for (int cols = 1; cols < COLS; cols++) {
        cout << marks[rows][cols] << "\t";
    }
    cout << IndividualScore[rows] << endl;

    if ((rows % 4) == 3) {
        cout << "TOTAL" <<setw(45)<< TeamScore[rows / 4] << endl;
        displayLine();
    }
}

    
    findIndWinner(IndividualScore);
    findTeamWinner(TeamScore);
    
}




