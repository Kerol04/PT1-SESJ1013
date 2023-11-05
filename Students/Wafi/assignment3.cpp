#include <iostream>
#include <string>
using namespace std;

double Calc(double total_loan_amount, double loan_period) {
    double result = total_loan_amount / (loan_period * 12);
    return result;
}

int main()
{
    double car_price, loan_period, interest_rate, down_payment, loan_amount, total_interest, monthly_interest, total_loan_amount, monthly_installment;
    string answer, recheck;
    
    do{
    cout << "Please enter car price(RM) :";
    cin >> car_price;
    cout << "Please enter loan period(in years) :";
    cin >> loan_period;
    cout << "Please enter interest rate :";
    cin >> interest_rate;
    down_payment = ((0.1) * car_price);
    cout <<"down payment is :"<< down_payment <<endl;
    loan_amount = (car_price) - (down_payment);
    total_interest = (interest_rate/100) * loan_amount * loan_period;
    cout << "check for monthly interest?(Yes/No) :";
    cin >> answer;
    
    if (answer == "Yes"){
        monthly_interest = total_interest/(loan_period * 12);
        cout <<"monthly interest : " << monthly_interest <<endl;
        total_loan_amount = loan_amount + total_interest;
        monthly_installment = Calc(total_loan_amount, loan_period);
        cout <<"monthly installment : " << monthly_installment <<endl;
    }
    else if (answer == "No"){
        total_loan_amount = loan_amount + total_interest;
        monthly_installment = Calc(total_loan_amount, loan_period);
        cout <<"monthly installment : " << monthly_installment <<endl;
    }
    cout <<"recheck or do another calculations?(Yes/No) :";
    cin >> recheck;
    }
    while (recheck == "Yes");
    
    return 0;
}