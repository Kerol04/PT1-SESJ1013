#include<iostream>
using namespace std;
int main(){
	int n;
	int sum=0,rem;
	
	cout<<"Enter an integer number:";
	cin>>n;
	
	while(n!=0){
		rem=n%10;
		cout<<rem;
		n=n/10;
		sum+=rem;
		if(n!=0){
			cout<<" + ";
		}
		else
		{
			cout<<" = "<<sum<<endl;
		}
	}
	
	if(sum%2==0){
		cout<<sum<<" is even number";
	}
	else{
		cout<<sum<<" is odd number";
	}
	
	if(sum%4==0 && sum%5==0){
		cout<< " & multiples of 4 and 5";
	}
	else if(sum%4==0 ){
		cout<< " & multiples of 4";
	}
	else if(sum%5==0 ){
		cout<< " & multiples of 5";
	}
	}
	
	
