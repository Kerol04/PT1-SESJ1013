#include <iostream>
#include <string>
using namespace std;

const int ROWS = 4;
const int COLS = 3;

void readMedals(int[][3]);

void country3Medals(int[][3],int,int);

void largestMedals(int[][3],int,int);

void smallestMedals(int[][3],int,int);

void highestGoldMedal(int[][3],int,int,int);

void totalBronzeMedal(int[][3],int,int);

void readMedals(int medals[ROWS][COLS]) {
    for (int row = 0; row < ROWS; ++row) {
        cout << "Enter medals for Country " << (row + 1) << " (Gold Silver Bronze): ";
        for (int col = 0; col < COLS; ++col) {
            cin >> medals[row][col];
        }
                if (row == 3) {
            break;
        }
    }
}

void country3Medals(int medals[][COLS], int rows, int numCountry){
    int total=0;
        for(int col=0; col<COLS; col++){
            total+= medals[2][col];
        }
    
    cout<< " The number of medals won by Country 3 is : "<< total<<endl;
}

void largestMedals(int medals[][COLS], int rows, int largest){
    for(int row =0; row<rows;row++){
        for(int col=0;col<COLS;col++){
            if(medals[row][col]>largest){
                largest= medals[row][col];
            }
        }
    }
    cout<< " The largest number of medals won is : "<<largest<<endl;
}

void smallestMedals(int medals[][COLS], int rows, int smallest){
    for(int row=0; row<rows; row++){
        for(int col=0;col<COLS;col++){
            if(medals[row][col]<smallest){
            smallest=medals[row][col];
            }
        }
    }
    cout<<" The smallest number of medal won is : "<<smallest<<endl;
}

void highestGoldMedal(int medals[][COLS],int rows,int highest){
    for(int row=0;row<rows;row++){
       if(medals[row][0]>highest){
       highest=medals[row][0];
       }
    }
    cout<<" The highest number of Gold medal won : "<<highest<<endl;
}

void totalBronzeMedal(int medals[][COLS],int rows, int numMedals){
    int total=0;
    for(int row=0;row<rows;row++){
        total +=medals[row][2];
    }
    cout<<" The total number of bronze medal is : "<<total<<endl;
}

int main(){
    int medals[ROWS][COLS];
	readMedals(medals);


    int numCountry =2;
    country3Medals(medals, ROWS , numCountry);

    int largest = INT_MIN;
    largestMedals(medals,ROWS,largest);

    int smallest= INT_MAX;
    smallestMedals(medals,ROWS,smallest);

    int highest=INT_MIN;
    highestGoldMedal(medals,ROWS,highest);

    int numMedal=2;
    totalBronzeMedal(medals,ROWS,numMedal);

    return 0;
}