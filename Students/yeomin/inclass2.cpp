#include <iostream>
using namespace std;

int main()
{
	int a=1;
	double d=1.0;
	
	a = 46/9;
	cout<<"a="<< a << endl;
	
	a = 46 % 9 + 4 * 4 - 2;
	cout<<"a="<< a << endl;
	
	a = 45 + 43 % 5 * (23 * 3 % 2);
	cout<<"a="<< a << endl;
	
	a %=3 / a + 3;
	cout<<"a="<< a << endl;
	
	d += 1.5 * 3 + (++a);
	cout<<"d="<< d << endl;
	
	d -= 1.5 * 3 + a++;
	cout<<"d="<< d << endl;
	
	return 0;
	
}
