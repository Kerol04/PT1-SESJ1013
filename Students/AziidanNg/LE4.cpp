/*Aziidan punya jangan tiruu hehe*/
#include <iostream>
using namespace std;

void medal_num(int medals[5][3],int i){
    cout<<"\nCOUNTRY's "<<i+1<<" MEDALS "<<endl;
    for(int j=0; j<3;j++){
    if (j==0){
        cout<<"GOLD: ";
        cin>>medals[i][j];
    }
    if(j==1){
        cout<<"SILVER: ";
        cin>>medals[i][j];
    }
    if (j==2){
        cout<<"BRONZE: ";
        cin>>medals[i][j];
    }
    }

}

int medal_total(int medals[5][3],int i){
    int total = 0;
    for(int j=0;j<3;j++){
        total=total+medals[i][j];
    }
    return total;
}

int medal_country_3(int medals[5][3],int i){
    int total3 = 0;
    for(int i=0;i<5;i++){
    if (i==2){
    for(int j=0;j<3;j++){
        total3=total3+medals[i][j];
    }}}
    return total3;
}

int largest(int medals[5][3],int i){
    int largest=0;
    for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
    if(medals[i][j]>largest){
        largest=medals[i][j];
    }}}
    return largest;
}

int smallest(int medals[5][3],int i){
    int smallest=1000000;
    for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
    if(medals[i][j]<smallest){
        smallest=medals[i][j];
    }}}
    return smallest;
}

int gold(int medals[5][3],int i){
    int highest=0;
    for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
    if (j==0){
    if(medals[i][j]>highest){
        highest=medals[i][j];
    }}}}
    return highest;
}

int bronze(int medals[5][3],int i){
    int bronzes = 0;
    for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
        if(j==2)
        bronzes=bronzes+medals[i][j];
    }}
    return bronzes;
}

int main(){
    int medals[5][3];
    int largests=0,smallests=0,high_gold=0,bronzes=0, country3;
    
    for(int i=0;i<5;i++){
    medal_num(medals,i);
    }

    cout<<"\t\tGold\t\tSilver\t\tBronze"<<endl;
    for(int i=0;i<5;i++){
        cout<<"Country "<<i+1;
        for(int j=0;j<3;j++){
            cout<<"\t"<<medals[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(int i=0;i<5;i++){
        country3 = medal_country_3(medals,i);
        bronzes = bronze(medals,i);
        high_gold = gold(medals,i);
        smallests = smallest(medals,i);
        largests = largest(medals,i);
    }
    cout<<"\nTotal number of medals won by Country 3: "<<country3<<endl;
    cout<<"Largest number of medals won: "<<largests<<endl;
    cout<<"Smallest number of medals won: "<<smallests<<endl;
    cout<<"Highest number of gold medals won: "<<high_gold<<endl;
    cout<<"Total number of bronze medals won: "<<bronzes<<endl;
    
    return 0;
}