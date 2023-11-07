#include <iostream>
using namespace std;
int main() {
    int num, digit, sum = 0;
    cout << "Enter an integer number: ";
    cin >> num;
    do {
        digit = num % 10;
        sum += digit;
        num /= 10;
    } while (num != 0);
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
