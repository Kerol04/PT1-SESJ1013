#include <iostream>
using namespace std;

const int country=4;
const int medal_type=3;

void readmedal_type(int medals[country][medal_type]){
    cout<<"Enter number of medal in each country (Gold Silver Bronze):"<<endl;
    for(int i=0; i<country; i++){
        cout<<"Country "<< (i+1)<<":";
        for(int j=0; j<medal_type; j++){
            cin>>medals[i][j];
        }
    }
}

int totalmedalsC3(const int medals[country][medal_type]){
    int total=0;
    for(int i=0; i<medal_type;++i){
        total+=medals[2][i];
    }
    return total;
}

int largemedal(const int medals[country][medal_type]){
    int largest=medals[0][0];
    for(int i=0; i<country;++i){
        for(int j=0; j<medal_type; ++j){
            if(medals[i][j]>largest){
                largest=medals[i][j];
            }
        }
    }
    return largest;
}

int smallmedal(const int medals[country][medal_type]){
    int smallest=medals[0][0];
    for(int i=0; i<country; ++i){
        for(int j=0; j<medal_type; ++j) {
            if(medals[i][j]<smallest){
                smallest=medals[i][j];
            }
        }
    }
    return smallest;
}

int highgoldmedal(const int medals[country][medal_type]){
    int highestgmedal=medals[0][0];
    for(int i=0; i<country;++i){
        if(medals[i][0]>highestgmedal){
            highestgmedal=medals[i][0];
        }
    }
    return highestgmedal;
}

int totalbronzemedal(const int medals[country][medal_type]){
    int bronzetotal=0;
    for(int i=0; i<country; ++i){
        bronzetotal += medals[i][2];
    }
    return bronzetotal;
}


int main(){
    int medals[country][medal_type];
    
    readmedal_type(medals);
    
    cout<<"Total medals won by country 3: "<< totalmedalsC3(medals)<<endl;
    cout<<"Largest number of medals won: "<< largemedal(medals)<<endl;
    cout<<"Smallest number of medals won:"<<smallmedal(medals)<<endl;
    cout<<"Highest number of gold medals won:"<<highgoldmedal(medals)<<endl;
    cout<<"Total number of bronze medals won"<<totalbronzemedal(medals)<<endl;
    
    return 0;
}    