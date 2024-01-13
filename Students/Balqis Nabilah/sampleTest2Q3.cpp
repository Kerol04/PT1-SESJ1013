// TEST2-QUESTION 3
// Name: BALQIS NABILAH BINTI MUHAMMAD AZWAN
// Matric No.: A23CS0054
// Section: 06

#include <iostream>

using namespace std;

// function prototypes
void getInput(double &, float &, int &, string &);
int deterAmountAssist (float, int);

// start main function
int main() 
{
	double ic;
	int child, amt;
	float income;
	char ans;
	string stat;
	
	do
	{
		cout << "<< Check eligibility for Malaysian Family Assistance >>" << endl;
		getInput(ic, income, child, stat);
		if (income <= 5000)
		{
			amt = deterAmountAssist (income, child);
			cout << "\nAmount of assistance = RM" << amt << endl;
		}
		
		cout << "\n\nPress 'Y' to enter other data: ";
		cin >> ans;
		cout << endl;
		
	} while (ans == 'Y' || ans == 'y');
	
    return 0;
}

void getInput(double &ic, float &income, int &child, string &stat)
{
	cout << "\nIC number: ";
	cin >> ic;
	cout << "Gross monthly income: RM";
	cin >> income;
	
	if (income > 5000.0)
	{
		stat = "NOT ELIGIBLE";
		cout << "Status: " << stat;
	}
	else
	{
		stat = "ELIGIBLE";
		cout << "Number of children: ";
		cin >> child;
		cout << "Status: " << stat;
	}
}

int deterAmountAssist (float income, int child)
{
	int assist;
	
	if (income <= 2500)
	{
		if (child == 0) {
			assist = 1000;
		}
		else if (child == 1 || child == 2) {
			assist = 1500;
		}
		else 
			assist = 2000;
	} 
	else if (income >= 2501 && income <= 5000)
	{
		if (child == 0) {
			assist = 400;
		}
		else if (child == 1 || child == 2) {
			assist = 600;
		}
		else 
			assist = 800;
	} 
	
	return assist;
}