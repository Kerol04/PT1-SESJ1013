#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	char car_model[10];
    char car_variant[10];
    char region[15];
    char choice; 
    int loan_period, interest_rate, down_payment, car_price, loan_amount, total_interest, monthly_installment;


    do
	{
	cout<<"Enter car model: ";
	cin>>car_model;
	cout<<"Enter car variant: ";
	cin>>car_variant;
	cout<<"Enter region: ";
	cin>>region;
	cout<<"Enter loan period in years: ";
	cin>>loan_period;
    cout<<"Enter interest rate: ";
    cin>>interest_rate;
    cout<<"Enter car price: ";
	cin>>car_price;


	down_payment= car_price/10;
        loan_amount= car_price - down_payment;
        total_interest = (interest_rate/100)*loan_amount*loan_period;
        monthly_installment = (loan_amount + total_interest) / (loan_period*12);

	if(loan_period < 1 or loan_period > 10){
		cout<< "Enter loan period between 1 to 10" << endl;
	}
    if(interest_rate < 1 or interest_rate > 10){
		cout<< "Enter interest rate between 1 to 10" << endl;
    }
    if(car_price>= 0){
        cout<<"Down Payment= RM"<<down_payment<< endl;
    }
    if(car_price>= 0){
        cout<<"Monthly Installment= RM"<<monthly_installment<<" per month"<< endl;
    }
	
	cout<<"Calculate another loan(Y/N): ";
	cin>>choice;

	} while (choice=='Y'||choice=='y');

	

	return 0;
}