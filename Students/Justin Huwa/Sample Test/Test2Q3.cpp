
// Name: Huwa Jia Sheng
// Matric No.: A23CS5005
// Section: 04

#include <iostream>
#include <string>

using namespace std;

// function prototypes
void getInput(double &, float &, int &, string &);
double deterAmountAssist(float, int);

// start main function
int main(){
    double IC;
    float monthly_income;
    int children_num;
    char choice;
    string status;

    do{
    cout<<"<< Check eligibility for Malaysian Family Assistance >>"<<endl;
    
    getInput(IC, monthly_income, children_num, status);

    if(monthly_income<5000){
    cout<<"\nAmount of assistance = RM"<< deterAmountAssist(monthly_income,children_num)<<endl;
    }

    cout<<"\nPress 'Y' to enter other data: ";
    cin>>choice;

    }while( (choice=='Y')|| (choice=='y'));
   
    return 0;
}

void getInput(double &IC, float &gross_monthly_income, int &num_of_children, string &status){
    
    cout<<"\nIC number: ";
    cin>>IC;

    cout<<"Gross monthly income: RM ";
    cin>>gross_monthly_income;

    if(gross_monthly_income>5000){
    status = "NOT ELIGIBLE";
	cout << "Status: " << status;
    }

    else if(gross_monthly_income<=5000){
    status = "ELIGIBLE";
    cout<<"Number of children: ";
    cin>>num_of_children;
	cout << "Status: " << status;
    }
}

double deterAmountAssist(float gross_monthly_income, int num_of_children){
    int assist_amount;

    if (gross_monthly_income <= 2500)
	{
		if (num_of_children == 0)
			assist_amount = 1000;
		else if (num_of_children == 1 || num_of_children == 2)
			assist_amount = 1500;
		else if(num_of_children>=3)
			assist_amount = 2000;
	} 

	else if (2501<= gross_monthly_income <= 5000)
	{
		if (num_of_children == 0)
			assist_amount = 400;
		else if (num_of_children == 1 || num_of_children == 2)
			assist_amount = 600;
		else if(num_of_children>=3)
			assist_amount = 800;
	} 

    return assist_amount;
}

