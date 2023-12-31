#include <iostream>
#include <fstream>

void displayLine();
int findIndWinner(int []);
int findTeamWinner(int []);

using namespace std;

int main(){
	
	int marks[12][7], totalstud[12]={0}, totalteam[3]={0};
	
	ifstream inputFile;
    inputFile.open("input.txt");
    if(inputFile.is_open()){
    	for(int x=0; x<12; x++){
		    for(int y=0;y<7; y++){
                inputFile>>marks[x][y];
			}
		}
    }
    else{
        cout<<"Sorry, input file does not exist!"<<endl;
        return 0;
    }
    
    inputFile.close();
    
    for(int x=0; x<12; x++){
	    for(int y=2;y<7; y++){
               totalstud[x] += marks[x][y];
		}
	}
	
	for(int x=0; x<4; x++){
		totalteam[0]+=totalstud[x];
	}
	
	for(int x=4; x<8; x++){
		totalteam[1]+=totalstud[x];
	}
	
			                
	for(int x=8; x<12; x++){
		totalteam[2]+=totalstud[x];
	}
	
	displayLine();
	cout<<"\nId\tE1\tE2\tE3\tE4\tE5\tTotal\n";
	displayLine();
	
	cout<<"\nTEAM 1"<<endl;
    for(int x=0; x<4; x++){
		for(int y=1;y<7; y++){
            cout<<marks[x][y]<<"\t";
		}
		cout<<totalstud[x]<<endl;
	}
	cout<<"TOTAL\t\t\t\t\t\t"<<totalteam[0]<<endl;
	displayLine();
	
	cout<<"\nTEAM 2"<<endl;
	for(int x=4; x<8; x++){
		for(int y=1;y<7; y++){
            cout<<marks[x][y]<<"\t";
		}
		cout<<totalstud[x]<<endl;
	}
	cout<<"TOTAL\t\t\t\t\t\t"<<totalteam[1]<<endl;
	displayLine();
	
	cout<<"\nTEAM 3"<<endl;
	for(int x=8; x<12; x++){
		for(int y=1;y<7; y++){
            cout<<marks[x][y]<<"\t";
		}
		cout<<totalstud[x]<<endl;
	}
	cout<<"TOTAL\t\t\t\t\t\t"<<totalteam[2]<<endl;
	displayLine();
	
	cout<<"\n\nWinner for Individual Category: "<<marks[findIndWinner(totalstud)][1]<<" (Team "<<marks[findIndWinner(totalstud)][0]<<")"<<endl;
	cout<<"Winner for Group Category: Team "<<findTeamWinner(totalteam)+1<<" (Score = "<<totalteam[findTeamWinner(totalteam)]<<")"<<endl;
	
	return 0;
}

void displayLine(){
	for(int x=0; x<=52; x++)
	cout<<"-";
}

int findIndWinner(int studmark[12]){
    int highest = 0;
	for (int x = 0; x < 12; x++){
        if (highest < studmark[x]){
            highest = studmark[x];
        }
    }
    
    for (int x = 0; x < 12; x++){
        if (highest == studmark[x]){
            return x;
        }
    }
}

int findTeamWinner(int teammark[3]){
	int highest = 0;
	for (int x = 0; x < 3; x++){
        if (highest < teammark[x]){
            highest = teammark[x];
        }
    }
    
    for (int x = 0; x < 12; x++){
        if (highest == teammark[x]){
            return x;
        }
    }
}
