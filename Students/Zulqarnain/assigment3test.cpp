#include <iostream>
#include <fstream>

using namespace std;
void getInput(string UNI[], int UNI_DATA[][3]);

int main(){
    const int NUM_ROW = 40;
    const int NUM_COL = 3;
    string UNI[NUM_ROW];
    int i,UNI_DATA[NUM_ROW][NUM_COL];

    getInput(UNI,UNI_DATA);


    cout<<i;
    return 0;
}
void getInput(string UNI[],int UNI_DATA[][3]){
    ifstream inFile;

    inFile.open("input1.txt");
    for(int i=0;i<30;i++){
        inFile >> UNI[i];
        cout<<UNI[i]<<endl;
    }
}