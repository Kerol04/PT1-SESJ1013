#include <iostream>
#include <string>
using namespace std;

void calcTotal(int [] [3] , int);
const int COLS=3;

void country3Medals(int[][3],int,int);

void largestMedals(int[][3],int,int);

void smallestMedals(int[][3],int,int);

void highestGoldMedal(int[][3], int,int,int);

void totalBronzeMedal(int[][3], int, int);

int main(){
    const int ROWS = 4;
    int medals[ROWS] [COLS]={{129, 257, 590}, 
                             {120, 279, 394}, 
                             {115,290, 123}, 
                             {98, 209, 112}};

    calcTotal(medals,ROWS);

    int numCountry =2;
    country3Medals(medals, ROWS , numCountry);

    int largest = medals[0][0];
    largestMedals(medals,ROWS,largest);

    int smallest= medals[0][0];
    smallestMedals(medals,ROWS,smallest);

    int typeMedal=0;
    int highest=medals[0][0];
    highestGoldMedal(medals,ROWS,typeMedal,highest);

    int numMedal=2;
    totalBronzeMedal(medals,ROWS,numMedal);

    return 0;
}

void calcTotal(int medals [][COLS], int rows){
    int total=0;
    for (int row=0; row<rows; row++){
        for(int col=0; col<COLS;col++){
        total+= medals[row][col];
        }
    }
    cout<<" The total is : "<< total<< endl;
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
            if(medals[row][col]<smallest);
            smallest=medals[row][col];
        }
    }
    cout<<" The smallest number of medal won is : "<<smallest<<endl;
}

void highestGoldMedal(int medals[][COLS],int rows, int typeMedals,int highest){
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
    cout<<" The total number of bronze medal is :"<<total<<endl;
}