#include <iostream>
using namespace std;

void medal_num(int medal[5][3],int i);
int medal_total(int medal[5][3],int i);
int highest(int total[5],int i);
int smallest(int total[5],int i);
int gold(int medal[5][3],int i);
int bronze(int medal[5][3],int i);

int main(){
    int medal[5][3];
    int temp,highests=0,smallests=0,hgold=0,bronzes=0,total[5];
    

    for(int i=0;i<5;i++){
        medal_num(medal,i);
        total[i] = medal_total(medal,i);
        temp=highest(total,i);
        if(temp>highests){
            highests=temp;
        }
        temp=smallest(total,i);
        if(temp<smallests){
            smallests=temp;
        }
        temp=gold(medal,i);
        if(temp>hgold){
            hgold=temp;
        }
        bronzes=bronzes+bronze(medal,i);
    }
    cout<<"          GOLD    SILVER  BRONZE"<<endl;
    for(int i=0;i<5;i++){
        cout<<"COUNTRY "<<i+1;
        for(int j=0;j<3;j++){
            cout<<" "<<medal[i][j]<<"      ";
        }
        cout<<endl;
    }
    
    return 0;
}
void medal_num(int medal[5][3],int i){
    cout<<"ENTER THE COUNTRY's "<<i+1<<" MEDALS "<<endl;
    cout<<"GOLD->SILVER->BRONZE"<<endl;
    for(int j=0;j<3;j++){
        cin>>medal[i][j];
    }

}
int medal_total(int medal[5][3],int i){
    int total = 0;
    for(int j=0;j<3;j++){
        total=total+medal[i][j];
    }
    return total;
}
int highest(int total[5],int i){
    return total[i];
}
int smallest(int total[5],int i){
    return total[i];
}
int gold(int medal[5][3],int i){
    return medal[i][1];
}
int bronze(int medal[5][3],int i){
    return medal[i][3];
}