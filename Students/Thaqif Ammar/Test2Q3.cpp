// Name: Muhammad Thaqif Ammar Bin Muhamed SUfian 
// Matric No.: A23CS0251
// Section: 04

#include <iostream>
using namespace std;

// function prototypes
void getInput(int *ICnum, int *NumChild, double *grossmonthlyInc, string *eligibilityStat);
double deterAmountAssist(int *Numchild,double *grossmonthlyInc);

// start main function
int main() {

    string eligibilitystat;
    int ICnum, Numchild;
    double grossmonthlyInc;
    double assistpay;
    char continueprogram;

   do {
   cout<<"Check the eligibility or Malaysian Assistance"<<endl;
   
     getInput(&ICnum, &Numchild ,&grossmonthlyInc,&eligibilitystat);
        assistpay=deterAmountAssist(&Numchild,&grossmonthlyInc);
        cout<<"Amount of assistance : "<<assistpay<<endl;

        cout<<"Press 'Y' to enter other data :  ";
        cin>>continueprogram;
        cout<<endl;

    }while(continueprogram=='Y' || continueprogram=='y');
    

    system("pause");
    return 0;
}

void getInput(int *ICnum, int *NumChild, double *grossmonthlyInc, string *eligibilityStat) {
    cout<<"Enter your IC number: ";
    cin>> *ICnum;

    cout<<"Enter your gross monthly income: ";
    cin>> *grossmonthlyInc;

    if(*grossmonthlyInc<=5000.00){
        cout<<"Enter number of children: "<<endl;
        cin>>*NumChild;
        *eligibilityStat = "ELIGIBLE";
        cout<<"STATUS: "<< *eligibilityStat<<endl;
       
       } else{
        *eligibilityStat ="NOT ELIGIBLE";
        cout<<"STATUS : "<< *eligibilityStat<<endl;
    }
        
}

double deterAmountAssist(int *Numchild, double *grossmonthlyInc){

    int Assistpay;

    if(*grossmonthlyInc<=2500){
        if(*Numchild==0)
        Assistpay= 1000;
        else if(*Numchild>=1 && *Numchild<=2)
        Assistpay= 1500;
        else if(*Numchild>=3)
        Assistpay= 2000;
    }
    else if(*grossmonthlyInc>=2501 && *grossmonthlyInc<=5000){
        if(*Numchild==0)
        Assistpay= 400;
        else if(*Numchild>=1 && *Numchild<=2)
        Assistpay= 600;
        else if(*Numchild>=3)
        Assistpay= 800;
    }
     
     return Assistpay;
    }
