#include <iostream>
using namespace std;
int main(){
	int n;
	int rem,sum=0;
	
	cout<<"Enter an integer number:";
	cin>>n;
	
	do{
		rem=n%10;
		cout<<rem;
		n=n/10;
		sum+=rem;
		if (n!=0){
			cout<<" + ";
		}
		else
		cout<<" = "<<sum<<endl;
	}while(n!=0);
	
	cout<<sum<<" is multiple of";
	
	if(sum%3==0 && sum%4==0 && sum%5==0 )
	cout<<" 3,4 and 5";
	else if(sum%3==0 && sum%4==0)
	cout<<" 3 and 4";
	else if(sum%3==0 && sum%5==0)
	cout<<" 3 and 5";
	else if(sum%4==0 && sum%5==0)
	cout<<" 4 and 5";
	else if(sum%3==0)
	cout<<" 3";
	else if(sum%4==0)
	cout<<" 4";
	else if(sum%5==0)
	cout<<" 5";
}