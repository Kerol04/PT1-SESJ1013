#include<iostream>
#define row 4
#define column 3 //define number of rows and columns

using namespace std;

int totMedal3 (int [row][column]); //function prototype
int largest (int [row][column]);
int smallest (int [row][column]);
int highestGold (int [row][column]);
int totBronze (int [row][column]);

int main()
{
	int medal[row][column];
			
	for (int i = 0; i < row; i++)
	{
		cout << "Enter number of medals for Country " << i+1 << endl; //user enter inputs
		cout << "Gold: ";
		cin >> medal[i][0];
		cout << "Silver: ";
		cin >> medal[i][1];
		cout << "Bronze: ";
		cin >> medal[i][2];
		cout << "\n";
	}
	
	cout << "\t\t Gold \t\t Silver \t Bronze" << endl; //display all inputs Q1
	for (int i = 0; i < row; i++)
	{
		cout << "Country " << i+1 << "\t  " << medal[i][0] << "\t\t   " << medal[i][1] << "\t\t   " << medal[i][2] << endl; 
	}
	
	cout << "\nTotal medals won by country 3: " << totMedal3 (medal) << endl; //Q2
	cout << "Largest number of medal won: " << largest (medal) << endl; //Q3
	cout << "Smallest number of medal won: " << smallest (medal) << endl; //Q4
	cout << "Highest number of gold medal won: " << highestGold (medal) << endl; //Q5
	cout << "Total bronze medal won: " << totBronze (medal) << endl; //Q6
	
	return 0;
}

int totMedal3 (int medal[row][column])
{
	int sum = 0;
	for (int j = 0; j < column; j++)
	{
		sum += medal[2][j];
	}
	
	return sum;
}

int largest (int medal[row][column])
{
	int large = 0;
	
	for (int i = 0; i < row; i++)
	{
		int sum = 0;
		for (int j = 0; j < column; j++)
		{
			sum += medal[i][j];
		}
		
		if (sum > large)
			large = sum;
	}
	
	return large;
}

int smallest (int medal[row][column])
{
	int sum = 0;
	for (int j = 0; j < column; j++)
	{
		sum += medal[0][j];
	}
	
	int small = sum; 

	for (int i = 1; i < row; i++)
	{
		sum=0;
		for (int j = 0; j < column; j++)
		{
			sum += medal[i][j];
		}
		
		if (sum < small)
			small = sum;
	}
	
	return small;
}

int highestGold (int medal[row][column])
{

	int highest = 0;

	for (int i = 0; i < row; i++)
	{
		if (medal[i][0] > highest)
			highest = medal[i][0];
	}

	
	return highest;
}

int totBronze (int medal[row][column])
{
	int bronze = 0;
	for (int i = 0; i < row; i++)
	{
		bronze += medal[i][2];
	}
	
	return bronze;
}