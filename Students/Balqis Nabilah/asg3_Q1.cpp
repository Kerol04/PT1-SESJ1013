//BALQIS NABILAH BINTI MUHAMMAD AZWAN
//AZ23CS0054
//SECJ1013 Section 04
//Assignment 3 

#include <iostream>
#include <fstream>
#define team 12
#define event 7

using namespace std;
void displayLine();
void findIndWinner(int psum[], int marks[team][event]);
void findTeamWinner(int total[], int marks[team][event]);

int main()
{
	int marks[team][event];
	ifstream input("input.txt");
	
	
	if (!input.is_open())
	{
		cout << "Sorry, input file does not exist!" << endl;
		return 0;                                           
	}
	
	for (int i = 0; i < team; i++)
	{
		for (int j = 0; j < event; j++)
		{
			input >> marks[i][j];
		}
	}
	
	displayLine();
	cout << "Id\t E1\t E2\t E3\t E4\t E5\t Total" << endl;
	displayLine();
	
	//Display Marks
    int total[3] = {0};  //array hold total marks for group -findteamwinner()
    int psum[12] = {0};  //array hold total marks for player -findIndwinner()
    int x = 0;
    int w = 0;
    int i;
   	while (x < 3)
	{
		cout << "\nTEAM " << x+1 << endl;
		for (i = w; i <= (w+3); i++)
		{
			cout << marks[i][1] << "\t ";	//Display team ID
			for (int j = 2; j < 7; j++)
			{
				cout << marks[i][j] << "\t "; 	//Display marks E1-E5
				psum[i] += marks[i][j]; 		//Total up marks for one person
			}
			cout << psum[i] << endl;	//Display total marks for one person
			total[x] += psum[i];		//Total up marks for one team
		}
		cout << "TOTAL\t\t\t\t\t\t " << total[x] << endl;	//Display total marks per team
		w = i;
		x++;	//loop for next team
	 
		displayLine();
	}
	
	findIndWinner(psum, marks);
	findTeamWinner(total, marks);
	
	input.close();
	return 0;
}

void displayLine()
{
	cout << "-------------------------------------------------------" << endl;
}

void findIndWinner(int psum[], int marks[team][event])
{
	int highestInd = 0 , indWin, teamNum;
	for (int i = 0; i < 12; i++)
	{
		if (psum[i] > highestInd)
		{
			highestInd = psum[i]; 	//marks
			indWin = marks[i][1];	//ID
			teamNum = marks[i][0];	//Team
		}
	}
	cout << "\nWinner for Individual Category: " << indWin << " (Team " << teamNum << ")" << endl;
}

void findTeamWinner(int total[], int marks[team][event])
{
	int highestGrp = 0, grpWin;
	for (int x = 0; x < 3; x++)
	{
		if (total[x] > highestGrp)
		{
			highestGrp = total[x];	//marks
			grpWin = x+1 ;	//Team
		}
	}
	cout << "Winner for Group Category: Team " << grpWin << " (Score = " << highestGrp << ")" << endl;
}