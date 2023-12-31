#include<iostream>
using namespace std;

int smallest (int num[], int size)
{
	int i;
	int small = 0;
	for (i = 1; i < size; i++)
	{
		if (num[i] < num[0])
		 small = i;
	}
	
	return small;
}

int main()
{
	int num[] = {1, 2, 4, 5, 10, 100, 2, -22};
	int size = sizeof(num) / sizeof(num[0]);
	
	int small = smallest (num, size);
	cout << "The smallest element: " << small << endl;
	cout << "Index of smallest element: " << num[small];     
	
	return 0;    
}
