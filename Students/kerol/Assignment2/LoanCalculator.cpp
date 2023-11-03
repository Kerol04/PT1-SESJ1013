//Coding for flowchart Set 2
#include <iostream>

using namespace std;

int VariantAtiva();
int VariantAruz();
int VariantBezza();
int VariantMyvi();
int VariantAlza();
int VariantAxia();
float Calc(float, int);

int main(){
    char check;
    
    do{
    int carprice, period;
    float depo, loanamount, interrate, totalinter, totalloan, monthlyinter, monthlyinstall;
    char model, check;
    
    cout<<"~~~Welcome to PERODUA LOAN CALCULATOR~~~\n"<<endl;
    cout<<"CAR MODEL\nA. Ativa\nB. Aruz\nC. Bezza\nD. Myvi\nE. Alza\nF. Axia\n"<<endl;
    cout<<"Enter the Car Model : ";
    cin >> model;
    
    switch(model){
        case 'A':case 'a': carprice = VariantAtiva();
                  break;
        case 'B':case 'b': carprice = VariantAruz();
                  break;
        case 'C':case 'c': carprice = VariantBezza();
                  break;
        case 'D':case 'd': carprice = VariantMyvi();
                  break;
        case 'E':case 'e': carprice = VariantAlza();
                  break;
        case 'F':case 'f': carprice = VariantAxia();
                  break;
    }
    
    cout<<"\nEnter the loan period (years) : ";
    cin >> period;
    while(period<1 || period>9){
        cout<<"\nPlease enter the loan period between 1-9 years"<<endl;
        cout<<"Enter the loan period (years) : ";
        cin >> period;
    }
    
    cout<<"\nEnter the interest rate (%) : ";
    cin >> interrate;
    while(interrate<0 || interrate>5){
        cout<<"\nPlease enter the interest rate between 0-5%"<<endl;
        cout<<"Enter the interest rate (%) : ";
        cin >> interrate;
    }
    
    depo = 0.1 * carprice;
    loanamount = carprice - depo;
    totalinter = (interrate/100) * loanamount * period;
    
    cout<<"\nDo you want to check for monthly interest?\nEnter Y for Yes or N for No : ";
    cin >> check;
    if(check=='Y' || check=='y'){
        monthlyinter = totalinter/(period*12);
        cout<<"\nThe monthly interest is RM"<<monthlyinter<<endl;
    }
    
    totalloan = loanamount + totalinter;
    monthlyinstall = Calc(totalloan, period);
    
    cout<<"\nMonthly Installment : RM"<<monthlyinstall<<endl;
    cout<<"\nDo you want to recheck or do another calculation?\nEnter Y for Yes or N for No : ";
    cin >> check;
    }while(check=='Y' || check=='y');
    
    cout<<"\n~~~Thank You For Using PERODUA Loan Calculator~~~";
    
    return 0;
}

int VariantAtiva(){
    int result;
    char var;
    cout<<"\nCAR VARIENT\nA. Ativa 1.0L X TURBO (CVT)\nB. Ativa 1.0L H TURBO (CVT)\nC. Ativa 1.0L AV TURBO (CVT)\n"<<endl;
    cout<<"Enter the Car Variant : ";
    cin >> var;
    if(var=='A'||var=='a')
    result = 62500;
    else if(var=='B'||var=='b')
    result = 67300;
    else
    result = 72600;
    return result;
}

int VariantAruz(){
    int result;
    char var;
    cout<<"\nCAR VARIENT\nA. Aruz 1.5 AV (AUTO)\nB. Aruz 1.5 X (AUTO)\n"<<endl;
    cout<<"Enter the Car Variant : ";
    cin >> var;
    if(var=='A'||var=='a')
    result = 77900;
    else
    result = 72900;
    return result;
}

int VariantBezza(){
    int result;
    char var;
    cout<<"\nCAR VARIENT\nA. Bezza 1.3 AV (AUTO)\nB. Bezza 1.3 X (AUTO)\nC. Bezza 1.0 G (AUTO)\nD. Bezza 1.0 G (MANUAL)\n"<<endl;
    cout<<"Enter the Car Variant : ";
    cin >> var;
    if(var=='A'||var=='a')
    result = 49980;
    else if(var=='B'||var=='b')
    result = 43980;
    else if(var=='C'||var=='c')
    result = 36580;
    else
    result = 34580;
    return result;
}

int VariantMyvi(){
    int result;
    char var;
    cout<<"\nCAR VARIENT\nA. Myvi 1.5L AV (CVT)\nB. Myvi 1.5L H (CVT)\nC. Myvi 1.5L X (CVT)\nD. Myvi 1.3L G (CVT)\nE. Myvi 1.3L G (CVT) (Without PSDA)\n"<<endl;
    cout<<"Enter the Car Variant : ";
    cin >> var;
    if(var=='A'||var=='a')
    result = 59900;
    else if(var=='B'||var=='b')
    result = 54900;
    else if(var=='C'||var=='c')
    result = 50900;
    else if(var=='D'||var=='d')
    result = 48500;
    else
    result = 46500;
    return result;
}

int VariantAlza(){
    int result;
    char var;
    cout<<"\nCAR VARIENT\nA. Alza 1.5L AV TURBO (D-CVT)\nB. Alza 1.5L H TURBO (D-CVT)\nC. Alza 1.5L X TURBO (D-CVT)\n"<<endl;
    cout<<"Enter the Car Variant : ";
    cin >> var;
    if(var=='A'||var=='a')
    result = 75500;
    else if(var=='B'||var=='b')
    result = 68000;
    else
    result = 62500;
    return result;
}

int VariantAxia(){
    int result;
    char var;
    cout<<"\nCAR VARIENT\nA. Axia 1.0L AV (D-CVT)\nB. Axia 1.0L SE TURBO (D-CVT)\nC. Axia 1.0L X TURBO (D-CVT)\nD. Axia 1.0L G (D-CVT)\nE. Axia 1.0L E (5MT)\n"<<endl;
    cout<<"Enter the Car Variant : ";
    cin >> var;
    if(var=='A'||var=='a')
    result = 49500;
    else if(var=='B'||var=='b')
    result = 44000;
    else if(var=='C'||var=='c')
    result = 40000;
    else if(var=='D'||var=='d')
    result = 38600;
    else
    result = 22000;
    return result;
}

float Calc(float total, int period){
    float result;
    result = total/(period*12);
    return result;
}
