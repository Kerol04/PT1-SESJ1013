//Write a program that stores the following number of medal
//collection for 5 countries into the 2-D array called medals.
//6 functions:
//– Read the number of medal for each country from a keyboard and 
//store them inside the medals array. -->data
//– Return total number of medals won by country 3. -->tnum_medals
//– Return the largest number of medals won. -->largest
//– Return the smallest number of medals won.
//– Return the highest number of gold medal won.
//– Return the total number of bronze medal won.

#include<iostream>
#include<iomanip>
using namespace std;
const int cols=3;
void data(int[][cols], int); //function 1 prototype
int tnum_medals(int[][cols], int); //function 2 prototype
int large(int[][cols], int); //function 3 prototype
int small(int[][cols], int); //function 4 prototype
int h_gold(int[][cols], int); //function 5 prototype
int bronze(int[][cols], int); //function 6 prototype

int main(){
    const int size = 5;
    int medals[size][cols];
    data(medals,size);
    cout <<"Total medals won by country 3: " << tnum_medals(medals,2) << endl;
    cout << "Largest number of medals won: " << large(medals,size) << endl;
    cout << "Smallest number of medals won: " << small(medals,size) << endl;
    cout << "Highest number of gold medals won: " << h_gold(medals,size) << endl;
    cout << "Total number of bronze medal won: " << bronze(medals,size) << endl;
    return 0;
}

void data(int medals[][cols], int rows){  //f1 header
    int letter = 20;
    char country[rows][letter];
    cout << "Please key in country name:\n";
    for(int i=0; i<rows; i++){
        cout << "Country " << (i+1) << ": ";
        cin >> country[i];
    }
    cout << "\nPlease key in number of medals for each country accordingly:";
    cout << "\n<Use 'tab' key between numbers in a row & press 'Enter' to proceed to next country>\n\n";
    cout << left << setw(20) << "Country" << "|\tGold\tSilver\tBronze\n";
    for(int x=0; x<rows; x++){
        cout << left << setw(20) << country[x] << ":\t";
        for(int y=0; y<cols; y++)
            cin >> medals[x][y];
            cin.ignore();
    }
    cout << endl;
}
int tnum_medals(int medals[][cols],int rows){ //f2 header
    int x, y, sum;
    for(x=0; x<rows; x++)
        sum=0;
        for(y=0; y<cols; y++)
            sum += medals[x][y];
    return sum;
}
int large(int medals[][cols], int rows){ //f3 header
    int largest=medals[0][0], x, y;
    for(x=0; x<rows; x++)
    {
        for(y=0; y<cols; y++)
            if(medals[x][y]>largest)
                largest=medals[x][y];
    }
    return largest;
}
int small(int medals[][cols], int rows){ //f4 header
    int smallest=medals[0][0], x, y;
    for(x=0; x<rows; x++)
    {
        for(y=0; y<cols; y++)
            if(medals[x][y]<smallest)
                smallest=medals[x][y];
    }
    return smallest;
}
int h_gold(int medals[][cols], int rows){ //f5 header
    int highestG=medals[0][0], x;
    for(x=0; x<rows; x++){
        if(medals[x][0]>highestG)
            highestG=medals[x][0];
    }
    return highestG;
}
int bronze(int medals[][cols],int rows){ //f6 header
    int x, sumB=0;
    for(x=0; x<rows; x++){
        sumB += medals[x][2];
    }
    return sumB;
}