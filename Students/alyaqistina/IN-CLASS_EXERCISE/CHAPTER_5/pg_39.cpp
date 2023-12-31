/*CHAPTER 5 ARRAY - SLIDE 39

- Write a program that lets the user enter 10 values into an
array. The program should then display the largest and
smallest values stored in the array.

- Write a program that lets the user enter the total rainfall
for each of 12 months into an array of doubles. The
program should then calculate and display the total rainfall
for the year, the average monthly rainfall, and the months
with the highest and lowest amounts.

Input Validation: Do not accept negative numbers for
monthly rainfall figures.
*/

#include <iostream>
using namespace std;

int main()
{

int val[10];

for(int i=1;i<=10;i++)
{
    cout << "Enter value " << i << " : ";
    cin >> val[i];
}

cout << endl;


double rainfall[12];                          //array named rainfall for 12 months
double sum=0, av;                             //initialize for total rainfall 
double H = -99999;                            //setting starting for highest
double L = 99999;                             //setting starting for lowest


for(int j=1;j<=12;j++)                        //looping for every 12 month
{
    cout << "Enter total rainfall for Month " << j << ":";
    cin >> rainfall[j];                       //user input total rainfall for each month

    while(rainfall[j] < 0){                   //loop for rejecting negative numbers                                
        cout << "Enter again: ";
        cin >> rainfall[j];
    }

    sum = sum + rainfall[j];
    
    if(rainfall[j] > H){                      //finding highest
        H = j;
    }

    if(rainfall[j] < L){                      //finding lowest
        L = j;
    }
}

 av = sum/12;                                 //operation for average

 cout << "Total rainfall for the year: "<< sum << endl;
 cout << "Average monthly rainfall: " << av << endl;
 cout << "Months with the highest amounts is Month " << H << endl;
 cout << "Months with the lowest amounts is Month " << L << endl;



    return 0;
}