#include <iostream>
using namespace std;


int A;
double W, H, BMR;
char G;
double calc(int, double, double);

int main()
{

do{
    cout<<"Enter age: ";
    cin>>A;

 }
 
 while (A<14||A>81);
        cout<<"Enter weight: ";
        cin>>W;
        cout<<"Enter height: ";
        cin>>H;
        calc(A, W, H);

        cout<<"ACTIVITY LEVEL: ";

        do{
        if(BMR>0&&BMR<1927)
        {
            cout<<"You have to do little to no exercise.";
        }
        else if(BMR>1926&&BMR<2208)
        {
            cout<<"You have to exercise 1-3 times a week.";
        }
        else if(BMR>2207&&BMR<2352)
        {
            cout<<"You have to exercise 4-5 times a week.";
        }
        else if(BMR>2351&&BMR<2487)
        {
            cout<<"You have to exercise daily.";
        }
        else if(BMR>2486&&BMR<2768)
        {
            cout<<"You have to do intense exercise 6-7 times a week.";
        }
        else if(BMR>2767&&BMR<3049)
        {
            cout<<"You have to exercise 1-3 times a week.";
        }
        else{
            cout<<"INVALID";
        }
        } 
        while(BMR<0&&BMR>3050);

    return 0;
}

double calc(int x, double y, double z)
{
    cout<<"Enter gender (M/F): ";
    cin>>G;
    
    if (G=='M')
    {
       BMR=(10*W)+(6.25*H)-(5*A)+5;
       cout<<"Your BMR is "<<BMR<<" calories/day."<<endl<<endl;
    }
    else if (G=='F')
    {
        BMR=(10*W)+(6.25*H)-(5*A)-161;
        cout<<"Your BMR is "<<BMR<<" calories/day."<<endl<<endl;
    }
    else{
        cout<<"Invalid Gender.(p/s;Put on caps lock!)"<<endl<<endl;
    }
   
    return BMR;

}