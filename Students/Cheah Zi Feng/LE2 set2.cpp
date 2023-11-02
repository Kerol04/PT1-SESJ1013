#include<iostream>
using namespace std;
int main(){
	int number;
	int sum=0;
	cout<<"Enter an integer number:";
	cin>>number;
	int temp = number;
	while(temp!=0){
		int digit=temp%10;
		sum+=digit;
		temp/=10;
	}
	cout<<"Sum of digits:"<<sum<<endl;
	if(sum%2==0){
		cout<<sum<<" is even number";}
		else{
		cout<<sum<<" is odd number";}
	if(sum%4==0&&sum%5==0)
	{cout<<" & multiples of 4 and 5.";
	}
	else if (sum % 4 == 0) {
        cout << " & multiple of 4." <<endl;
    }

    else if (sum % 5 == 0) {
        cout << " & multiple of 5." <<endl;
    }
}
