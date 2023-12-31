#include <iostream>
using namespace std;

const int NUM_COUNTRY = 5;
const int NUM_MEDAL = 3;

void readMedals(int collection[NUM_COUNTRY][NUM_MEDAL]) {

    for (int i=0; i<NUM_COUNTRY; ++i){
        cout<<"Enter the num of medal for gold, silver and bronze for Country " << i+1 << " separated by spaces: ";
        for (int j=0; j<NUM_MEDAL;++j) {
            cin>> collection[i][j];
        }
    }
}

int totalMedalCountry3(int collection[NUM_COUNTRY][NUM_MEDAL]){
    int totalCountry3 = 0;
    for(int j=0;j<NUM_MEDAL;j++){
        totalCountry3 += collection[2][j];
    }
    
    return totalCountry3;
}

int largest(int collection[NUM_COUNTRY][NUM_MEDAL]){
    int largest=0;
    for(int i=0; i<NUM_COUNTRY; i++){
        for(int j=0; j<NUM_MEDAL; j++){
            if(collection[i][j]>largest){
                largest= collection[i][j]; 
            }
        }
    }
    return largest;
}

int smallest(int collection[NUM_COUNTRY][NUM_MEDAL]){
    int smallest=99999;
    for(int i=0; i<NUM_COUNTRY; i++){
        for(int j=0; j<NUM_MEDAL; j++){
            if(collection[i][j]<smallest){
                smallest= collection[i][j]; 
            }
        }
    }
    return smallest;
}

int highestGold(int collection[NUM_COUNTRY][NUM_MEDAL]){
    int highestGold=0;
    for(int i=0; i<NUM_COUNTRY; i++){
        if(collection[i][0]>highestGold){
            highestGold= collection[i][0]; 
        }   
    }
    return highestGold;
}

int bronzeTotal(int collection[NUM_COUNTRY][NUM_MEDAL]){
    int bronzeTotal=0;
    for(int i=0; i<NUM_COUNTRY; i++){
           bronzeTotal =  bronzeTotal + collection[i][2];  
    }
    return bronzeTotal;
}

int main () {
    
    int collection[NUM_COUNTRY][NUM_MEDAL];
    readMedals(collection);
    
    cout<<"\nTotal number of medals won by Country 3: "<< totalMedalCountry3(collection) <<endl;
    cout<<"Largest number of medals won: "<< largest(collection)<< endl;
    cout<<"Smallest number of medals won: "<< smallest(collection)<< endl;
    cout<<"Highest number of gold medals won: "<< highestGold(collection)<< endl;
    cout<<"Total number of bronze medals won: "<< bronzeTotal(collection)<< endl;
    
    return 0;
}

    
  
