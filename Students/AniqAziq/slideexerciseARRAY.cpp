#include<iostream>
using namespace std;

int main()
{
    int medal[4][3],medal1=0,medal2=0,medal4=0,medal3=0,highest=0,sumbronze;

    for(int row=0;row<4; row++)
    {
        cout<<"Enter gold medal for the country "<<row+1<<":";
        cin>>medal[row][0];
        cout<<"Enter silver medal for the country "<<row+1<<":";
        cin>>medal[row][1];
        cout<<"Enter bronze medal for the country "<<row+1<<":";
        cin>>medal[row][2];
    }

    for(int j=0;j<3;j++)
    {
        medal3+=medal[2][j];
    }
    cout<<"The medal won by country 3 : "<<medal3<<endl;
    for(int j=0;j<3;j++)
    {
        medal1+=medal[0][j];
    }
    for(int j=0;j<3;j++)
    {
        medal2+=medal[1][j];
    }
    for(int j=0;j<3;j++)
    {
        medal4+=medal[3][j];
    }

    if((medal1>medal2) && (medal1>medal3) && (medal1>medal4))
    cout<<"Largest number of medal won : "<<medal1<<endl;
    else if((medal2>medal1) && (medal2>medal3) && (medal2>medal4))
    cout<<"Largest number of medal won : "<<medal2<<endl;
    else if((medal3>medal1) && (medal3>medal2) && (medal3>medal4))
    cout<<"Largest number of medal won : "<<medal3<<endl;
    else if((medal4>medal1) && (medal4>medal2) && (medal4>medal3))
    cout<<"Largest number of medal won : "<<medal4<<endl;

    if((medal1<medal2) && (medal1<medal3) && (medal1<medal4))
    cout<<"Smallest number of medal won : "<<medal1<<endl;
    else if((medal2<medal1) && (medal2<medal3) && (medal2<medal4))
    cout<<"Smallest number of medal won : "<<medal2<<endl;
    else if((medal3<medal1) && (medal3<medal2) && (medal3<medal4))
    cout<<"Smallest number of medal won : "<<medal3<<endl;
    else if((medal4<medal1) && (medal4<medal2) && (medal4<medal3))
    cout<<"Smallest number of medal won : "<<medal4<<endl;

    for(int y=0;y<4;y++)
    {
        if(medal[y][0]>highest)
        highest=medal[y][0];
    }
    cout<<"Highest number of gold medal won : "<<highest<<endl;

    for(int y=0;y<4;y++)
    {
        sumbronze+=medal[y][2];
    }
    cout<<"Total number of bronze medal won : "<<sumbronze<<endl;


    system("pause");
    return 0;
}