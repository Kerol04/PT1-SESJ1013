#include <iostream>

using namespace std;

int main(){
    const int country = 4;
    const int medal = 3;
    int largest=0, smallest=1000, high_gold=0, total_bronz=0, i, y;
    int num_medal[country][medal];
    int count[4];
    
    for(i=0;i<country;i++){
        for(y=0;y<medal;y++){
            if(y==0){
                cout<<"\nEnter the number of gold medal for country "<<i+1<<": ";
                cin >>num_medal[i][y];
            }else if(y==1){
                cout<<"Enter the number of silver medal for country "<<i+1<<": ";
                cin >>num_medal[i][y];
            }else{
                cout<<"Enter the number of bronze medal for country "<<i+1<<": ";
                cin >>num_medal[i][y];
                total_bronz += num_medal[i][y];
            }
        }
    }
    
    for(i=0;i<country;i++){
        for(y=0;y<medal;y++){
            count[i] += num_medal[i][y];
        }
        if(count[i]>largest)
        largest = count[i];
        if(count[i]<smallest)
        smallest = count[i];
    }
    
    for(i=0;i<country;i++){
        y=0;
        if(num_medal[i][y]>high_gold)
        high_gold = num_medal[i][y];
    }
    
    cout<<"\nTotal number of medals won by country 3: "<<count[2]<<endl;
    cout<<"The largest number of medals won: "<<largest<<endl;
    cout<<"The smallest number of medals won: "<<smallest<<endl;
    cout<<"The highest number of gold medal won: "<<high_gold<<endl;
    cout<<"The total number of bronze medal won: "<<total_bronz<<endl;
    
    return 0;
}
