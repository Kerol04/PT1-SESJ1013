#include <iostream>
#define row 4
#define col 3

int country3(int medal[row][col]);
int biggest(int a[row][col]);
int smallest(int a[row][col]);
int highest_gold(int a[row][col]);
int total_bronze(int a[row][col]);

using namespace std;

int main()
{
    int medal[row][col];
    
    for (int i = 0; i < row; i++)
    {
    cout << "Enter number of medals for Country " << i+1 << endl;
    cout << "Gold: ";
    cin >> medal[i][0];
    cout << "Silver: ";
    cin >> medal[i][1];
    cout << "Bronze: ";
    cin >> medal[i][2];
    }

    cout << "Total number of medals won by Country 3 is " << country3(medal) << endl;
    cout << "Biggest number of medals won is " << biggest(medal) << endl;
    cout << "Smallest number of medals won is " << smallest(medal) << endl;
    cout << "Highest number of gold medals won is " << highest_gold(medal) << endl;
    cout << "Total number of bronze medals won is " << total_bronze(medal) << endl;


return 0;
}

int country3 (int medal[row][col])
{
    int sum = 0;
    for (int i = 0; i < col; i++)
    {
        sum += medal[2][i];
    }

    return sum;
}

int biggest (int medal[row][col])
{
    int index = medal[0][0];
    int big;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (medal[i][j] > index)
            big = medal[i][j];
                else 
                big = index;
        }
    }

    return big;
}

int smallest (int medal[row][col])
{
    int index = medal[0][0];
    int small;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (medal[i][j] < index)
            small = medal[i][j];
                else 
                small = index;
        }
    }

    return small;
}

int highest_gold (int medal[row][col])
{
    int index = medal[0][0];
    int high;
    for (int i = 1; i < row; i++)
    {
        if (medal[i][0] > index)
        high = medal[i][0];
            else
            high = index;
    }

    return high;
}

int total_bronze (int medal[row][col])
{
   int total = 0;
    for (int i = 0; i < row; i++)
    {
        total += medal[i][2];
    }

    return total;
}