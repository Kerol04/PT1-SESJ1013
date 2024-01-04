
// Name:       MUHAMMAD KHAIRUL HAKIMI BIN MOHD KHALID
// Matric No.: A23CS0133
// Section:    04

#include <iostream>
#include <string>


using namespace std;

// function prototypes
void getInput(string &,float &,int &, int &);
float deterAmountAssist(float , int );

// start main function
int main() {
	string icnum;
	float income;
	int status, numchild;
	char other;
	do{
		cout<<"\n<< Check eligibility for Malaysian Family Assistance >>"<<endl;
		getInput(icnum, income, status, numchild);
		if(status)
		cout<<"Amount of assistance = RM"<<deterAmountAssist(income,numchild)<<endl;
		
		cout<<"\nPress 'Y' to enter other data: ";
		cin >> other;
	}while(other == 'y' || other == 'Y');
	system("pause");
    return 0;
}

void getInput(string &ic,float &gross,int &eligstat, int &child){
	cout<<"\nIC number: ";
	cin >> ic;
	cout<<"Gross monthly income: RM";
	cin >> gross;
	if(gross>5000){
		eligstat = 0;
		cout<<"Status: NOT ELIGIBLE"<<endl;
	}else{
		eligstat = 1;
		cout<<"Number of children: ";
		cin >> child;
		cout<<"Status: ELIGIBLE"<<endl;
	}
}

float deterAmountAssist(float gross, int child){
	float amount;
	if(gross>2500){
		switch(child){
			case 0: amount = 400; break;
			case 1: amount = 600; break;
			case 2: amount = 600; break;
			default: amount = 800; break;
		}
	}else{
		switch(child){
			case 0: amount = 1000; break;
			case 1: amount = 1500; break;
			case 2: amount = 1500; break;
			default: amount = 2000; break;
		}
	}
	return amount;
}