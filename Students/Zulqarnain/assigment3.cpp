// Name: MUHAMMAD NAZMI BIN MOHD SAIFULIZAM
// Matric No.: A23CS0135
// Section: 04
// Date : 3/1/2023

// Name: MUHAMMAD ZULQARNAIN BIN ALI
// Matric No.: A23CS0139
// Section: 04
// Date : 3/1/2023

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//function prototype
int getInput(string [], int [][3]);
void calTotalAverage(int [][3],int );
int getLowest(int [][3],int ,int );
int getHighest(int [][3],int ,int );
void printOutput(string [],int [][3],int );
void printOutput2(string [],int [][3],int [],int []);

int main(){
    //making array and declare variables
    const int NUM_ROW = 40;
    const int NUM_COL = 3;
    string UNI[NUM_ROW];
    int i,UNI_DATA[NUM_ROW][NUM_COL],lowest[3],highest[3];

    cout<<"READING FILE..."<<endl;
    i = getInput(UNI,UNI_DATA);
    
    cout<<"UPDATING OUTPUT FILE...";
    printOutput(UNI,UNI_DATA,i);

    //finding lowest and highest
    for(int j=0;j<3;j++){
        lowest[j]=getLowest(UNI_DATA ,i,j);
        highest[j]=getHighest(UNI_DATA ,i,j);
    }
    calTotalAverage(UNI_DATA,i);
    printOutput2(UNI,UNI_DATA,lowest,highest);

    return 0;
}
int getInput(string UNI[],int UNI_DATA[][3]){
    ifstream inFile;//opening file to read
    inFile.open("input1.txt");

    if (!inFile.is_open()) {
        cerr << "Error opening the file!" << endl;
        return 1;   //return error if file can't be opened
    }

    for(int i=0;i<30;i++){//fetching file data
        inFile>>UNI[i];
        if(UNI[i]==UNI[i+1])
            return i;
        for(int j=0;j<3;j++){
            inFile >> UNI_DATA[i][j];
        }
    }
    inFile.close();
    return 0;
}
int getLowest(int UNI_DATA[][3],int i,int j){
    int lowest=99999,l;

    for(int k=0;k<i;k++){
        if(UNI_DATA[k][j]<=lowest){
            lowest = UNI_DATA[k][j];
            l=k;
        }
    }
    return l;
}
int getHighest(int UNI_DATA[][3],int i,int j){
    int highest=0,h;

    for(int k=0;k<i;k++){
        if(UNI_DATA[k][j]>highest){
            highest = UNI_DATA[k][j];
            h=k;
        }
    }
    return h;
}
void printOutput(string UNI[],int UNI_DATA[][3],int i){
    ofstream outFile;
    outFile.open("output.txt");
    outFile<<right;
    outFile<<setw(57)<<"NUMBER OF STUDENTS' INTAKE, ENROLMENT AND OUTPUT\n"<<setw(45)<<"IN PUBLIC UNIVERSITIES (2015)"<<endl;
    outFile<<"---------------------------------------------------------------"<<endl;
    outFile<<left;
    outFile<<setw(23)<<"  UNIVERSITY"<<setw(16)<<"INTAKE"<<setw(16)<<"ENROLMENT"<<setw(16)<<"OUTPUT"<<endl;
    outFile<<"---------------------------------------------------------------"<<endl;
    //print data from getInput function
    for(int j=0;j<i;j++){
        outFile<<left;
        outFile<<setw(12)<<UNI[j];
        outFile<<right;
        for(int k=0;k<3;k++){
            if(k==2){
                outFile<<setw(15)<<UNI_DATA[j][k];}
            else
                outFile<<setw(17)<<UNI_DATA[j][k];
        }
        outFile<<endl;
        

    }
    outFile<<"---------------------------------------------------------------"<<endl;
    outFile.close();
}
void calTotalAverage(int UNI_DATA[][3],int i){
    double average[3];
    ofstream outFile;
    outFile.open("output.txt",ios::app);
    outFile<<left;
    
    //print total
    outFile<<setw(12)<<"TOTAL";
    outFile<<right;
    for(int j=0;j<3;j++){
        int total = 0;
        for(int k=0;k<i;k++){
            total=total+UNI_DATA[k][j];
        }
        average[j]= static_cast<double>(total)/i;
        if(j==2){
            outFile<<setw(15)<<total;
        }
        else
            outFile<<setw(17)<<total;
    }
    outFile<<left;

    //print average
    outFile<<setw(12)<<"\nAVERAGE";
    outFile<<right;
    outFile<< fixed << setprecision(2);
    for(int j=0;j<3;j++){
        if(j==2){
            outFile<<setw(15)<<average[j];
        }
        else if(j==1)
            outFile<<setw(17)<<average[j];
        else
            outFile<<setw(18)<<average[j];
    }
    outFile<<"\n---------------------------------------------------------------"<<endl;
    outFile.close();
}
void printOutput2(string UNI[],int UNI_DATA[][3],int lowest[],int highest[]){
    int range[3];
    string lowUni[3],highUni[3];

    //setting the lowest and highest value based on index found
    //get uni name for the lowest and highest
    for(int j=0;j<3;j++){
        lowUni[j]=UNI[lowest[j]];
        highUni[j]=UNI[highest[j]];
        lowest[j]=UNI_DATA[lowest[j]][j];
        highest[j]=UNI_DATA[highest[j]][j];
        range[j]=highest[j]-lowest[j];

    }
    ofstream outFile;
    outFile.open("output.txt",ios::app);
    outFile<<left;
    outFile<<setw(42)<<"THE LOWEST NUMBER OF STUDENTS' INTAKE"<<"= "<<lowest[0]<<"("<<lowUni[0]<<")"<<endl;
    outFile<<setw(42)<<"THE LOWEST NUMBER OF STUDENTS' ENROLMENT"<<"= "<<lowest[1]<<"("<<lowUni[1]<<")"<<endl;
    outFile<<setw(42)<<"THE LOWEST NUMBER OF STUDENTS' OUTPUT"<<"= "<<lowest[2]<<"("<<lowUni[2]<<")"<<endl<<endl;
    outFile<<setw(43)<<"THE HIGHEST NUMBER OF STUDENTS' INTAKE"<<"= "<<highest[0]<<"("<<highUni[0]<<")"<<endl;
    outFile<<setw(43)<<"THE HIGHEST NUMBER OF STUDENTS' ENROLMENT"<<"= "<<highest[1]<<"("<<highUni[1]<<")"<<endl;
    outFile<<setw(43)<<"THE HIGHEST NUMBER OF STUDENTS' OUTPUT"<<"= "<<highest[2]<<"("<<highUni[2]<<")"<<endl<<endl;
    outFile<<setw(44)<<"THE RANGE OF NUMBER OF STUDENTS' INTAKE"<<"= "<<range[0]<<endl;
    outFile<<setw(44)<<"THE RANGE OF NUMBER OF STUDENTS' ENROLMENT"<<"= "<<range[1]<<endl;
    outFile<<setw(44)<<"THE RANGE OF NUMBER OF STUDENTS' OUTPUT"<<"= "<<range[2]<<endl<<endl;
    outFile<<"---------------------------------------------------------------"<<endl;
    outFile.close();
}

