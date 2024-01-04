/* QUESTION 2
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//FUNCTION PROTOTYPE:
int getInput(string[], int[], int[], int[]);
void calTotal(int[], int[], int[], int, int &, int &, int &);
void getLowest(int[], int[], int[], int, int &, int &, int &);
void getHighest(int[], int[], int[], int, int &, int &, int &);


int main()
{
    string uni[100];
    int i, total, intake[100], enrll[100], output[100],
        sumI = 0, sumE = 0, sumO = 0,
        lowI, lowE, lowO, 
        highI, highE, highO;

    ofstream fileo("output.txt");

    cout << "\t\tNUMBER OF STUDENTS' INTAKE, ENROLMENT AND OUTPUT\t\t\n";
    cout << "\t\t\t\tIN PUBLIC UNIVERSITIES (2015)\n";
    cout << "-------------------------------------------------------------------------\n";
    cout << "\tUNIVERSITY\tINTAKE\t\tENROLLMENT\tOUTPUT\n";
    cout << "-------------------------------------------------------------------------\n";

    total = getInput(uni, intake, enrll, output); 

    if(total == 1){
        cout << "File cannot be found.";
        return 0;
    }

    for(int i = 0; i < total; i++)
    {
            cout << "\t  " << uni[i] << "\t\t" << intake[i] << "\t\t" << enrll[i] << "\t\t" << output[i] << "\n";
    }
    
    cout << "-------------------------------------------------------------------------\n";
    
    calTotal(intake, enrll, output, total, sumI, sumE, sumO);

    getLowest(intake, enrll, output, total, lowI, lowE, lowO);

    getHighest(intake, enrll, output, total, highI, highE, highO);

    cout << "\t  TOTAL\t\t" << sumI << "\t\t" << sumE << "\t\t" << sumO << "\n";


    cout << "\t  AVERAGE\t" << setprecision(-2) << (double)sumI/total << "\t\t" << (double)sumE/total << "\t\t" << (double)sumO/total <<"\n";

    cout << "-------------------------------------------------------------------------\n";
    cout << "\n";

    cout << "THE LOWEST NUMBER OF STUDENTS' INTAKE         = " << intake[lowI] << " (" << uni[lowI] << ")\n";

    cout << "THE LOWEST NUMBER OF STUDENTS' ENROLMENT      = " << enrll[lowE] << " (" << uni[lowE] << ")\n";

    cout << "THE LOWEST NUMBER OF STUDENTS' OUTPUT         = " << output[lowO] << " (" << uni[lowO] << ")\n\n";

    cout << "THE HIGHEST NUMBER OF STUDENTS' INTAKE        = " << intake[highI] << " (" << uni[highI] << ")\n";

    cout << "THE HIGHEST NUMBER OF STUDENTS' ENROLMENT     = " << enrll[highE] << " (" << uni[highE] << ")\n";

    cout << "THE HIGHEST NUMBER OF STUDENTS' OUTPUT        = " << output[highO] << " (" << uni[highO] << ")\n\n";

    cout << "THE RANGE OF NUMBER OF STUDENTS' INTAKE       = " << intake[highI] - intake[lowI] << "\n";

    cout << "THE RANGE OF NUMBER OF STUDENTS' ENROLMENT    = " << enrll[highE] - enrll[lowE] << "\n";

    cout << "THE RANGE OF NUMBER OF STUDENTS' OUTPUT       = " << output[highO] - output[lowO] << "\n\n";

    cout << "-----------------------------------------------------------------------\n";

    return 0;
}

//TASK 1:
int getInput(string u[], int t[], int e[], int o[])
{

    ifstream file("input.txt");

    if(!file){
        return 1;
    }

    int i = 0;

    while(file >> u[i] >> t[i] >> e[i] >> o[i])
    {
        i++;
    }

return i;
}


//TASK 2:
void calTotal(int t[], int e[], int o[], int total, int &sumI, int &sumE, int &sumO)
{
    for(int i = 0; i < total; i++)
    {
        sumI += t[i];

        sumE += e[i];

        sumO += o[i];

    }

}


//TASK 3:
void getLowest(int t[], int e[], int o[], int total, int &lowI, int &lowE, int &lowO)
{
    int indext = t[0];
    int indexe = e[0];
    int indexo = o[0];

    for(int i = 1; i < total; i++)
    {
        if(t[i] < indext){
            indext = t[i];
            lowI = i;
        }
    }
    
    for(int j = 1; j < total; j++)
    {
        if(e[j] < indexe){
            indexe = e[j];
            lowE = j;
        }
    }
     for(int k = 1; k < total; k++)
    {
        if(o[k] < indexo){
            indexo = o[k];
            lowO = k;
        }
    }


}


//TASK 4:
void getHighest(int t[], int e[], int o[], int total, int &highI, int &highE, int &highO)
{
    int indext = t[0];
    int indexe = e[0];
    int indexo = o[0];

    for(int i = 1; i < total; i++)
    {
        if(t[i] > indext){
            indext = t[i];
            highI = i;
        }
    }
    
    for(int j = 1; j < total; j++)
    {
        if(e[j] > indexe){
            indexe = e[j];
            highE = j;
        }
    }
    
    
    for(int k = 1; k < total; k++)
    {
        if(o[k] > indexo){
            indexo = o[k];
            highO = k;
       }
    }

}









