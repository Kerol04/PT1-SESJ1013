/*ASSIGNMENT 3 
QUESTION 1
NUR ARISHA BINTI AMYRUL NAIM
A23CS0154 */


#include <iostream>
#include <fstream> // used for reading or writing files.
#define row 12
#define col 7 //define dimension for array

int indMark[12]; // array for participant marks
int teamMark[3]; // array for team marks
int total1, total2, total3; // total for each team
int marks[row][col]; // array to display output from input file

void displayLine(); //function to display lines
void findIndWinner(int[]); // function to find winner for individual category
void findTeamWinner(int[]); // function to find winner for team category
void calcTotal(int[][7]); //function to find total mark for each participant

using namespace std;


int main()
{

    //input file
    ifstream fileInput;

    fileInput.open("input.txt"); 


    //getting input.txt file input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            fileInput >> marks[i][j]; //store inside marks array
        }
    }

//fail to open file
    if (!fileInput.is_open())
    {
        cout << "Sorry, input file does not exist!" << endl;
        cout << "Press any key to continue . . ." << endl;
        return 0;
    }


    //output display
    displayLine();
    cout << "Id \t E1 \t E2 \t E3 \t E4 \t E5 \t Total";
    displayLine();

    calcTotal(marks);


    //TEAM 1
    cout << "TEAM " << marks[0][0] << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << marks[i][1] << "\t"; //display participant ID

        for(int j = 2; j < col; j++)
        {
            cout << marks[i][j]; //display marks
            cout << "\t";
        }
        cout << indMark[i]; //display participant total marks
        cout << endl;
    }
    cout << "TOTAL \t \t \t \t \t \t" << teamMark[0]; //display team mark
    displayLine();

    //TEAM 2
    cout << "TEAM " << marks[4][0] << endl;
    for (int i = 4; i < 8; i++)
    {
        cout << marks[i][1] << "\t";
        for (int j = 2; j < col; j++)
        {

            cout << marks[i][j];
            cout << "\t";
        }
        cout << indMark[i];
        cout << endl;
        
    }
    cout << "TOTAL \t \t \t \t \t \t" << teamMark[1];
    displayLine();

    //TEAM 3
        cout << "TEAM " << marks[8][0] << endl;
        for (int i = 8; i < 12; i++)
        {
            cout << marks[i][1] << "\t";
            for (int j = 2; j < col; j++)
            {
                cout << marks[i][j]; 
                cout << "\t";
            }
            cout << indMark[i];
            cout << endl;
        }
    cout << "TOTAL \t \t \t \t \t \t" << teamMark[2];

    displayLine();
    cout << endl;

    //function call to find winners for each category
    findIndWinner(indMark);
    findTeamWinner(teamMark);

    cout << endl;
    cout << "Press any key to continue . . ." << endl;

    fileInput.close(); //closing the file

    return 0;
}

void displayLine()
{
    cout << endl;
    for (int i = 0; i < 53; i++)
    cout << "-";
    cout << endl;
}

void calcTotal(int marks[][7])
{
    for (int i = 0; i < row; i++)
    {
        for(int j = 2; j < col; j++)
        {
            indMark[i] += marks[i][j];
        }
        //total marks for each team, store in teamMark array
        teamMark[0] = indMark[0] + indMark[1] + indMark[2] + indMark[3];
        teamMark[1] = indMark[4] + indMark[5] + indMark[6] + indMark[7];
        teamMark[2] = indMark[8] + indMark[9] + indMark[10] + indMark[11];
    }
}

void findIndWinner (int indMark[])
{
    int participantWin, teamWin;
    int index = indMark[0]; //set index as first element in array
    for (int i = 1; i < 12; i++)
    {
        if (indMark[i] > index)
        {
        index = indMark[i]; //replace index with highest mark in array
        int win = i;
        participantWin = marks[i][1]; //display participant ID
        teamWin = marks[i][0];  //display participant's team
    }
    }
    cout <<  "Winner for Individual Category: " << participantWin << " (Team " << teamWin << ")" << endl;

}

void findTeamWinner (int teamMark[])
{
    int win;
    int index = teamMark[0];
    for (int i = 1; i < 3; i++)
    {
        if (teamMark[i] > index)
        {
            index = teamMark[i]; //display team's score
            win = i+1; //display team number
        }
    }

    cout << "Winner for Team Category: Team " << win << " (Score = " << index << ")" << endl;
}




