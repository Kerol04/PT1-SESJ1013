#include <iostream>
using namespace std;
int main(){
	int number,sum =0;
	cout<<"Enter an integer number:";
	cin>>number;
	int temp=number;
	while(temp!=0){
		int digit=temp%10;
		sum+=digit;
		temp/=10;
	}
	cout<<"Sum of digits:"<<sum<<endl;
	if(sum%3==0&&sum%4==0&&sum%5==0)
	{cout<<sum<<" is a multiple of 3,4 and 5."<<endl;
	}
	else if(sum%3==0&&sum%4==0)
	{cout<<sum<<" is a multiple of 3 and 4."<<endl;
	}
	else if(sum%4==0&&sum%5==0)
	{cout<<sum<<" is a multiple of 4 and 5."<<endl;
	}
	else if(sum%3==0&&sum%5==0)
	{cout<<sum<<" is a multiple of 3 and 5."<<endl;
	}
	else if(sum%3==0){
		cout<<sum<<" is a multiples of 3."<<endl;
	}
	else if(sum%4==0){
		cout<<sum<<" is a multiples of 4."<<endl;
	}
	else if(sum%5==0){
		cout<<sum<<" is a multiples of 5."<<endl;
	}
	return 0;	
}
