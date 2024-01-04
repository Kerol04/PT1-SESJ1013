#include <iostream>


using namespace std;

// function prototype
void getInput(double, double, char , int);
int deterAmountAssist(double, int, int);


// start main function
int main() {
   
   int ic, income, numOfCh;
   char data, status;
   do{
   cout << "<< Check eligibility for Malaysian Family Assistance >>\n" ;

    getInput(ic, income, status, numOfCh);

    if(income <= 5000){
    cout << "Amount of assistance = RM";
    int assistance = deterAmountAssist(income, numOfCh, assistance);
    cout << assistance;
    cout << endl;}

    cout << "Press 'Y' to enter other data :";
    cin >> data;
    } while (data == 'y' || data == 'Y');

    

    


    return 0;
}

void getInput(double ic, double income, char status, int numOfCh)
{
    cout << "IC number: ";
    cin >> ic;
    cout << "Gross monthly income: RM";
    cin >> income;
    
    if(income >= 5000){
        cout << "Status: NOT ELIGIBLE\n";
        status = 'N';}
    else{
        cout << "Number of children : ";
        cin >> numOfCh;
        cout << "Status: ELIGIBLE\n";
        status = 'E';
    }
}

int deterAmountAssist(double income, int numOfCh, int a)
{
    
        if(income <= 2500){
            if(numOfCh >= 3)
                    a = 2000;
               else if (numOfCh == 1 || numOfCh == 2)
                    a = 1500;
               else
                    a = 1000;
            }
        
        else {
            if(numOfCh == 0 ){
                a = 400;
            }
            else if (numOfCh == 1 || numOfCh == 2){
                a = 600;
            }
            else{
                a = 800;}
        
        }
    return a;
}
