#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

const int teams = 3;  
const int part = 4;  
const int events = 7; 

void displayLine(); 
void findIndWinner(int totalInd[], int marks[teams*part][events]);
void findTeamWinner(int totalTeam[], int marks[teams*part][events]);

int main(){
    int marks[teams*part][events] = {0}; //initialize array to zero

    //Read input from file
    ifstream inputFile("input.txt");
    if(!inputFile.is_open()){
        cout << "Sorry, input file does not exist!" << endl;
        cout << "Press any key to continue . . ." << endl;
        return 0;
    }

    for(int i=0; i<teams*part; i++){
        for(int j=0; j<events; j++){
            inputFile >> marks[i][j];
        }
    }

    //Display the results
    displayLine();
    cout << left;
    cout << setw(7) << "Id" << setw(7) << "E1" << setw(7) << "E2" << setw(7) << "E3"
         << setw(7) << "E4" << setw(7) << "E5" << setw(7) <<"Total" << endl;
    displayLine();

    int totalTeam[teams]={0};
    int totalInd[teams*part]={0};
    int x=0, y=0, i;
    while(x<teams){
        cout << "Team " << x+1 << endl;
        for (i = y; i<(y+part); i++){
			cout << left << setw(7) << marks[i][1];
            int totalIndPerStudent = 0;
            for(int j=2; j<events; j++){
                cout << left << setw(7) << marks[i][j];
                totalIndPerStudent += marks[i][j];
            }
            cout << setw(7) << totalIndPerStudent << endl;
            totalInd[i] = totalIndPerStudent;
            totalTeam[x] += totalIndPerStudent;
        } 
        cout << left << setw(7) << "TOTAL" << right << setw(38) << totalTeam[x] << endl;
        x++;
        y=i;
        displayLine();
    }
    //Determine winners
    findIndWinner(totalInd, marks);
    findTeamWinner(totalTeam, marks);
    
    cout << "\nPress any key to continue . . ." << endl;
    inputFile.close();
    return 0;
}

void displayLine(){   //f1
    for(int i=0; i<52; i++){
        cout << '-';
    }
    cout << endl;
}

void findIndWinner(int totalInd[], int marks[teams * part][events]){
    int highest=totalInd[0], winner, teamNum;
    for(int i=1; i<teams*part; i++){
        if(totalInd[i]>highest){
            highest = totalInd[i];
            winner = marks[i][1];
            teamNum = marks[i][0];
        }
    }
    cout << "\nWinner for Individual Category: " << winner << " (Team " << teamNum << ")" << endl;
}

void findTeamWinner(int totalTeam[], int marks[teams * part][events]){
    int highest=totalTeam[0], teamNum;
    for(int x=1; x<teams; x++){
        if(totalTeam[x]>highest){
            highest = totalTeam[x];
            teamNum = x+1;
        }
    }
    cout << "Winner for Group Category: Team " << teamNum << " (Score = " << highest << ")" << endl;
}
