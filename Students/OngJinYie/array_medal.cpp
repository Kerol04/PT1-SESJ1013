#include <iostream>
using namespace std;

int TotalNumC3(int[][3]);
int LargestNum(int[][3]);
int SmallestNum(int[][3]);
int HighestGold(int[][3]);
int TotalBronze(int[][3]);

const int COUNTRY=4;
const int MEDAL=3;
int medals[COUNTRY][MEDAL];

int main()
{
    for(int n=0;n<COUNTRY;n++)
    {
        for(int i=0;i<MEDAL;i++)
        {
            cout<<"Country "<<(n+1);
            if (i==0)
            cout<<" Gold :";
            else if (i==1)
            cout<<" Silver :";
            else if(i==2)
            cout<<" Bronze :";
            
            cin>>medals[n][i];
        }
    }

    int sum=TotalNumC3(medals);
    cout<<"Total number of medals won by country 3 is "<<sum<<endl;

    int largest=LargestNum(medals);
    cout<<"The largest number of medals won is "<<largest<<endl;

    int smallest=SmallestNum(medals);
    cout<<"The smallest number of medals won is "<<smallest<<endl;

    int highestgold=HighestGold(medals);
    cout<<"The highest number of gold medal won is "<<highestgold<<endl;

    int totalbronze=TotalBronze(medals);
    cout<<"The total number of bronze medal won is "<<totalbronze<<endl;


    return 0;
}

int TotalNumC3(int medals[COUNTRY][MEDAL])
{
    int sum=0;
    for(int row=0;row<MEDAL;row++)           
       sum=sum+medals[2][row];
    return sum;
}

int LargestNum(int medals[COUNTRY][MEDAL])
{
    int largest=medals[0][0];
    for(int row=0;row<COUNTRY;row++)
    {
        for(int col=0;col<MEDAL;col++)
        {
            if(medals[row][col]>largest)
            largest=medals[row][col];
            
        }
    }
    return largest;
}

int SmallestNum(int medals[COUNTRY][MEDAL])
{
    int smallest=medals[0][0];
    for(int row=0;row<COUNTRY;row++)
    {
        for(int col=0;col<MEDAL;col++)
        {
            if(medals[row][col]<smallest)
            smallest=medals[row][col];
            
        }
    }
    return smallest;
}

int HighestGold(int medals[COUNTRY][MEDAL])
{
    int highestgold=medals[0][0];
    
    for(int row=0;row<COUNTRY;row++)
    {
        if(medals[row][0]>highestgold)
        highestgold=medals[row][0];
        
    }
    return highestgold;
    
}

int TotalBronze(int medals[COUNTRY][MEDAL])
{
    int totalbronze=0;
    for(int row=0;row<COUNTRY;row++)
        totalbronze=totalbronze+medals[row][2];
    
    return totalbronze;
}
