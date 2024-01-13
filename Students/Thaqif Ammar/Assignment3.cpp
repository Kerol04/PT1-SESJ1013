#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

#define totUniversities 20

void getInput(string universities[], int studIntake[], int enrolment[], int output[]);
int calTotal(int arr[]);
double calAverage(int total, int count);
void getLowest(int intake[], int enrolment[], int output[]);
void getHighest(int intake[], int enrolment[], int output[]);
int calRange(int arr[]);

int main()
{
    string universities[totUniversities];
    int studIntake[totUniversities];
    int enrolment[totUniversities];
    int output[totUniversities];
    int count = 0;

    getInput(universities, studIntake, enrolment, output);

    ofstream outputFile;
    outputFile.open("Output.txt");
    cout << "-------------------------------------------------------------------" << endl;
    cout << "\t\tUNIVERSITY INTAKE ENROLMENT OUTPUT" << endl;
    cout << "-------------------------------------------------------------------" << endl;

    for (int i = 0; i < 20; i++)
    {
        cout << left;
        outputFile << universities[i] << " " << studIntake[i] << " " << enrolment[i] << " " << output[i] << endl;
        cout << setw(7) << universities[i];
        cout << right;
        cout << setw(15) << studIntake[i] << setw(15) << enrolment[i] << setw(15) << output[i] << endl;
    }

    cout << "-------------------------------------------------------------------" << endl;

    int totalIntake = calTotal(studIntake);
    int totalEnrolment = calTotal(enrolment);
    int totalOutput = calTotal(output);

    double averageIntake = calAverage(totalIntake, totUniversities);
    double averageEnrolment = calAverage(totalEnrolment, totUniversities);
    double averageOutput = calAverage(totalOutput, totUniversities);

    cout << " TOTAL   " <<setw(15)<< totalIntake << setw(15) << totalEnrolment << setw(15) << totalOutput << endl;
    cout << " AVERAGE " << setw(15) << fixed << setprecision(2) << averageIntake << setw(15)<< averageEnrolment << setw(15) << averageOutput << endl;
    cout << "---------------------------------------------------------------" << endl;

    getLowest(studIntake, enrolment, output);

    getHighest(studIntake, enrolment, output);
   

    int rangeIntake = calRange(studIntake);
    int rangeEnrolment = calRange(enrolment);
    int rangeOutput = calRange(output);

    cout << "THE RANGE OF NUMBER OF STUDENTS' INTAKE = " << rangeIntake << endl;
    cout << "THE RANGE OF NUMBER OF STUDENTS' ENROLMENT = " << rangeEnrolment << endl;
    cout << "THE RANGE OF NUMBER OF STUDENTS' OUTPUT = " << rangeOutput << endl;
    cout << "---------------------------------------------------------------" << endl;

    outputFile.close();
    system("pause");

    return 0;
}

void getInput(string universities[], int intake[], int enrolment[], int output[])
{
    ifstream inputFile;
    inputFile.open("input.txt");

    if (!inputFile)
    {
        cout << "No input file! \n";
        system("pause");
        exit(1); // Add 1 to indicate an error
    }

    for (int i = 0; i < 20; i++)
    {
        inputFile >> universities[i] >> intake[i] >> enrolment[i] >> output[i];
    }

    inputFile.close();
}

int calTotal(int arr[])
{
    int Total = 0;
    for (int i = 0; i < 20; i++)
    {
        Total = Total + arr[i];
    }
    return Total;
}

double calAverage(int total, int count)
{
    return static_cast<double>(total) / count;
}

void getLowest(int studIntake[], int enrolment[], int output[])
{
    int lowestIntake = 0;
    for (int i = 1; i < 20; i++)
    {
        if (studIntake[i] < studIntake[lowestIntake])
        {
            lowestIntake= i;
        }
    }
    cout << "THE LOWEST NUMBER OF STUDENTS' INTAKE = " << studIntake[lowestIntake] << endl;

    int lowestenrolment = 0;
    for (int i = 1; i < 20; i++)
    {
        if (enrolment[i] < enrolment[lowestenrolment])
        {
            lowestenrolment = i;
        }
    }
    cout << "THE LOWEST NUMBER OF STUDENTS' ENROLMENT = " << enrolment[lowestenrolment] << endl;

    int lowestoutput = 0;
    for (int i = 1; i < 20; i++)
    {
        if (output[i] < output[lowestoutput])
        {
            lowestoutput = i;
        }
    }
    cout << "THE LOWEST NUMBER OF STUDENTS' OUTPUT = " << output[lowestoutput] << endl;
}



void getHighest(int studIntake[], int enrolment[], int output[]) {
    int highestIntake = 0;
    for (int i = 1; i < 20; i++) {
        if (studIntake[i] > studIntake[highestIntake]) {
            highestIntake = i;
        }
    }
    cout << "THE HIGHEST NUMBER OF STUDENTS' INTAKE = " << studIntake[highestIntake] << endl;

    int highestEnrolment = 0;
    for (int i = 1; i < 20; i++) {
        if (enrolment[i] > enrolment[highestEnrolment]) {
            highestEnrolment = i;
        }
    }
    cout << "THE HIGHEST NUMBER OF STUDENTS' ENROLMENT = " << enrolment[highestEnrolment] << endl;

    int highestOutput = 0;
    for (int i = 1; i < 20; i++) {
        if (output[i] > output[highestOutput]) {
            highestOutput = i;
        }
    }
    cout << "THE HIGHEST NUMBER OF STUDENTS' OUTPUT = " << output[highestOutput] << endl;
}


int calRange(int arr[]) {
    int minValue = arr[0];
    int maxValue = arr[0];

    for (int i = 1; i < totUniversities; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }

        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }

    return maxValue - minValue;
}
